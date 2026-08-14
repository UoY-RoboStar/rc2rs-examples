import physmod::joints::*
import physmod::math::*

const PI: real = 3.1415

joint Revolute {
	input tau: real, pV: vector(real,6), pA: vector(real,6)
	
	output F: vector(real,6), fV: vector(real,6), fA: vector(real,6)
	
	local theta: real, v:real, a:real
	
	const AXIS: vector(real,3)
	const S: vector(real,6) = ScrewAxis(AXIS,Pitch::Finite(0))
	const parent: LINK, child: LINK 
	/* screw axis for the joint expressed in the frame of the child link  */
	const A: vector(real,6) = Adjoint(inverse(AbsTransform(child)))*S
	/* configuration of parent link in the frame of child link for arbitrary theta (T(i,i-1))*/
	const T: real -> matrix(real,4,4) = lambda theta: real @ exp(TwistToSe3(A)*(-theta))*Transform(child,parent)
	/* Adjoint representation of the transformation T */
	const AdT: real -> matrix(real,6,6) = lambda theta: real @ Adjoint(T(theta))
	
	equation fV == AdT(theta)*pV + A*v
	equation fA == AdT(theta)*pA+ ad(fV,A)*v * A*a
	equation tau == transpose(F)*A
	equation derivative(theta) == v
	equation derivative(v) == a
	
	annotation Revolute {
		axis = Axis {
			xyz = AXIS
			initial_position = PI
			dynamics = Dynamics {
				damping = 0.4
			}
		}
	}
}

actuator SpeedControlMotor { 
	input das: real 
	output T: real
	local Tm: real, Vemf: real, Tf: real 
	local V: real, i: real
	local theta: real, av: real, e: real
	
	const b: real, Ke: real, Kt: real
	const R: real, L: real
	const Kp: real, Ki: real, Kd: real
	
	equation av == derivative(theta)
	equation Tm == Kt*i
	equation Vemf == Ke*av
	equation Tf == b*av
	equation T == Tm - Tf
	equation V == i*R+L*derivative(i)+Vemf 
	equation e == das - av
	equation V == Kp*e+Ki*integral(e,0,t)+Kd*derivative(e)
	
}

fragment ActuatedJoint {
	jref hinge = Revolute {
		aref motor = SpeedControlMotor {
			relation hinge.tau == motor.T
		}
	}
}