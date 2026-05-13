import physmod::joints::Revolute
import physmod::actuators::*

pmodel SRanger {
	const WIDTH:real, LENGTH: real
	const HEIGHT: real,RADIUS:real
	const PI: real = 3.1415

	local link Base {
		pose {
			x = 0
			y = 0
			z = 3*RADIUS/4+HEIGHT/2
			roll = 0
			pitch = 0
			yaw = 0
		}
		def {
		}
		local body CasterWheel {
			pose {
				x = -LENGTH/4-RADIUS/2 
				y = 0
				z = -HEIGHT/2-RADIUS/4
				roll = 0
				pitch = 0
				yaw = 0
			}
			def {
				sphere(radius = RADIUS/2) 
			}
		}
		local body Chassis {
			def {
				box(length = LENGTH, width = WIDTH, height = HEIGHT)
			}
		}
		jref LHinge = Revolute { 
			instantiation AXIS = (|0,1,0|)
			aref LMotor = SpeedControlMotor {
				relation LHinge.tau == LMotor.T
			}
			flexibly connected to LWheel
		}
		jref RHinge = Revolute {
			instantiation AXIS = (|0,1,0|) 
			aref RMotor = SpeedControlMotor {
				relation RHinge.tau == RMotor.T
			}
			flexibly connected to RWheel
		}
		local sensor IR {
			pose {
				x = -LENGTH/2
				y = 0
				z = HEIGHT/2
				roll = 0
				pitch = 0
				yaw = PI
			}
			def {
				const e: real = 2.71828
				input distance: real
				output voltage: real
				equation voltage == 4*e^(-0.028784*distance)
			}
		}
	}
	local link LWheel {
		pose {
			x = LENGTH/4
			y = WIDTH/2+RADIUS/4+0.5cm
			z = RADIUS
			roll = 0
			pitch = PI/2
			yaw = PI/2
		}
		def {}
		local body Wheel {
			def {
				cylinder(radius = RADIUS, length = RADIUS/2)
			}
		}
	}
	local link RWheel {
		pose {
			x = LENGTH/4
			y = -(WIDTH/2+RADIUS/4+0.5cm)
			z = RADIUS
			roll = 0
			pitch = PI/2
			yaw = PI/2
		}
		def {}
		local body Wheel {
			def {
				cylinder(radius = RADIUS, length = RADIUS/2)	
			}
		}
	}
}
