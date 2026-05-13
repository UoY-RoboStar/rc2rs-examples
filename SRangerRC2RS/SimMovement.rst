interface MovementI {
	move( lv : real , av : real)
	stop()
}

interface ObstacleI {
	event obstacle
}

controller SimMovement {
	cycleDef cycle == 1
	uses ObstacleI
	requires MovementI
	sref sm = SimSMovement
	connection SimMovement on obstacle to sm on obstacle
}

stm SimSMovement {
	cycleDef cycle == 1
	const PI: real, lv : real, av : real 
	clock MBC
	input context {
		uses ObstacleI
	}
	output context {
		requires MovementI
	}initial i1
	
	state SMoving {
		entry $move( lv , 0)
	}
	
	state DMoving {}
	
	junction J1
	
	state Waiting {}
	
	state STurning {
		entry $move( 0 , av)
	}
	
	state DTurning {}
	
	junction J2
	
	transition t1 {
		from i1
		to SMoving
	}
	
	transition t2 {
		from SMoving to DMoving
	}
	
	transition t3 {
		from DMoving to J1
		exec
	}
	
	transition t4 {
		from J1 to DMoving
		condition not $obstacle
	}
	
	transition t5 {
		from J1 to Waiting
		condition $obstacle
		action #MBC; $stop()
	}
	
	transition t6 {
		from Waiting to STurning
		exec
	}
	
	transition t7 {
		from STurning to DTurning
	}
	
	transition t8 {
		from DTurning to J2
		exec
	}
	
	transition t9 {
		from J2 to DTurning
		condition since(MBC)<PI/av
	}
	
	transition t10 {
		from J2 to SMoving
		condition since(MBC)>=PI/av
	}
}

module SimCMovement {
	cycleDef cycle == 1
	robotic platform Vehicle {
		provides MovementI
		uses ObstacleI
	}

	cref cm = SimMovement
	connection Vehicle on obstacle to cm on obstacle ( _async )
}

