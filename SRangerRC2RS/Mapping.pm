map M dmodel SimCMovement to pmodel SRanger {
	operation move {
		var dsl: real, dsr: real 
		const axisLength: real = WIDTH+2*(RADIUS/4+0.5cm)
		equation SRanger::Base::LHinge::LMotor.das == dsl
		equation SRanger::Base::RHinge::RMotor.das == dsr
		equation lv == RADIUS*(dsl+dsr)/2
		equation av == RADIUS*(dsl-dsr)/axisLength
	}
	operation stop {
		equation SRanger::Base::LHinge::LMotor.das == 0
		equation SRanger::Base::RHinge::RMotor.das == 0
	}
	input event obstacle {
		predicate SRanger::Base::IR.voltage >= 3.0
	}
}