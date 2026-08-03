interface OpsCtrI {
	interceptOp ( x : real , y : real )
	pidOp ( x : real , y : real )
}

interface platformConstI {
	const HEIGHT_TO_SHAPE1 : real
	const HEIGHT_TO_SHAPE2 : real
	const WAIT_LOWER1: nat
	const WAIT_LOWER2: nat
	const BELT_SPEED: real
	const step_size: real
}

interface platformOpI {
	pick()
	drop()
	lift()
	lower ( dist : real)
	set_v_theta(v_t: real)
	set_v_radius(v_r:real)
}

interface lCameraI {
	event lShapeX: real
	event lShapeY: real
	event lShapeTS: real
}

interface rCameraI {
	event rShapeX: real
	event rShapeY: real
	event rShapeTS: real
}

interface feedbackI {
	event lifted_TS: real
}

controller simArmController {
	cycleDef cycle == 1
	requires platformOpI
	requires platformConstI
	requires OpsCtrI
	uses rCameraI 
	uses lCameraI
	uses feedbackI 
	sref sm = simDetectionBehaviourStm
	
	
	connection simArmController on rShapeX to sm on rShapeX
	connection simArmController on rShapeY to sm on rShapeY
	connection simArmController on rShapeTS to sm on rShapeTS
	connection simArmController on lShapeX to sm on lShapeX
	connection simArmController on lShapeY to sm on lShapeY
	connection simArmController on lShapeTS to sm on lShapeTS
	connection simArmController on lifted_TS to sm on lifted_TS
}


operation lower (dist : real) {
	input context { }
	output context { }
}


operation pick ( ) {
	input context { }
	output context { }
}

operation lift () {
	input context { }
	output context { }
}

operation set_v_theta (v_t : real) {
	input context { }
	output context { }
}

operation set_v_radius (v_r : real) {
	input context { }
	output context { }
}

operation drop () {
	input context { }
	output context { }
}

operation interceptOp ( x : real, y : real) {
	requires platformOpI
	requires platformConstI
	var epsilon_theta: real
	var epsilon_radius: real
	var target_x: real
	var target_y: real
	var c_theta: real
	var c_radius: real
	var i_theta: real
	var i_radius: real
	var p_e_theta: real
	var p_e_radius: real
	var e_theta: real
	var e_radius: real
	var d_theta: real
	var d_radius: real
	var t_theta: real
	var t_radius: real
	var v_theta: real
	var v_radius: real
	const STEP_SIZE: nat
	
	initial i1
	
	state STEP {
		entry e_theta = calc_e_theta(t_theta, c_theta); 
			e_radius = calc_e_radius(t_radius, c_radius); 
			d_theta = calc_d_theta(e_theta, p_e_theta, STEP_SIZE); 
			d_radius = calc_d_radius(e_radius, p_e_radius, STEP_SIZE); 
			i_theta = i_theta + calc_i_theta(e_theta, p_e_theta, STEP_SIZE); 
			i_radius = i_radius + calc_i_radius(e_radius, p_e_radius, STEP_SIZE); 
			v_theta = calc_v_theta(e_theta, i_theta, d_theta); 
			set_v_theta(v_theta); 
			v_radius = calc_v_radius(e_radius, i_radius, d_radius); 
			set_v_radius(v_radius)
	}
	
	junction j1
	
	final f1
	
	transition t1 {
		from i1
		to STEP
		action target_x = get_t_x(x); target_y = get_t_y(y); p_e_theta = 0; p_e_radius = 0; d_theta = 0; d_radius = 0; i_theta = 0; i_radius = 0; t_theta = calc_theta(target_x, target_y); t_radius = calc_radius(target_x, target_y); p_e_theta = calc_p_e_theta(t_theta, c_theta); p_e_radius = calc_p_e_radius(t_radius, c_radius)
	}
	transition t3 {
		from j1
		to STEP
		condition not (e_theta < epsilon_theta /\ -epsilon_theta < e_theta /\ e_radius < epsilon_radius /\ -epsilon_radius < e_theta)
		action exec ; (p_e_theta = e_theta; p_e_radius = e_radius; target_y = update_t_y(target_y, BELT_SPEED, STEP_SIZE); t_radius = calc_radius(target_x, target_y); t_theta = calc_theta(target_x, target_y) )
	}
	
	transition t0 {
		from STEP
		to j1
	}
	
	transition t4 {
		from j1
		to f1
		condition (e_theta < epsilon_theta /\ -epsilon_theta < e_theta /\ e_radius < epsilon_radius /\ -epsilon_radius < e_theta)
		action v_theta = 0; v_radius = 0
	}
	
	input context { }
	output context { }
}


operation pidOp ( x : real, y : real) {
	requires platformOpI
	requires platformConstI
	var epsilon_theta: real
	var epsilon_radius: real
	var target_x: real
	var target_y: real
	var c_theta: real
	var c_radius: real
	var i_theta: real
	var i_radius: real
	var p_e_theta: real
	var p_e_radius: real
	var e_theta: real
	var e_radius: real
	var d_theta: real
	var d_radius: real
	var t_theta: real
	var t_radius: real
	var v_theta: real
	var v_radius: real
	const STEP_SIZE: nat
	
	initial i1
	
	state STEP {
		entry e_theta = calc_e_theta(t_theta, c_theta); 
			e_radius = calc_e_radius(t_radius, c_radius); 
			d_theta = calc_d_theta(e_theta, p_e_theta, STEP_SIZE); 
			d_radius = calc_d_radius(e_radius, p_e_radius, STEP_SIZE); 
			i_theta = i_theta + calc_i_theta(e_theta, p_e_theta, STEP_SIZE); 
			i_radius = i_radius + calc_i_radius(e_radius, p_e_radius, STEP_SIZE); 
			v_theta = calc_v_theta(e_theta, i_theta, d_theta); 
			set_v_theta(v_theta); 
			v_radius = calc_v_radius(e_radius, i_radius, d_radius); 
			set_v_radius(v_radius)
	}
	
	junction j1
	
	final f1
	
	transition t1 {
		from i1
		to STEP
		action target_x = get_t_x(x); target_y = get_t_y(y); p_e_theta = 0; p_e_radius = 0; d_theta = 0; d_radius = 0; i_theta = 0; i_radius = 0; t_theta = calc_theta(target_x, target_y); t_radius = calc_radius(target_x, target_y); p_e_theta = calc_p_e_theta(t_theta, c_theta); p_e_radius = calc_p_e_radius(t_radius, c_radius)
	}
	transition t3 {
		from j1
		to STEP
		condition not (e_theta < epsilon_theta /\ -epsilon_theta < e_theta /\ e_radius < epsilon_radius /\ -epsilon_radius < e_theta)
		action exec ; (p_e_theta = e_theta; p_e_radius = e_radius )
	}
	
	transition t0 {
		from STEP
		to j1
	}
	
	transition t4 {
		from j1
		to f1
		condition (e_theta < epsilon_theta /\ -epsilon_theta < e_theta /\ e_radius < epsilon_radius /\ -epsilon_radius < e_theta)
		action v_theta = 0; v_radius = 0
	}
	
	input context { }
	output context { }
}


function get_t_x(x : real) : real {
}

function get_t_y(y : real) : real {
}

function calc_theta(target_x : real, target_y : real) : real {
}

function calc_radius(target_x : real, target_y : real) : real {
}

function calc_p_e_theta(t_theta : real, c_theta : real) : real {
}

function calc_p_e_radius(t_radius : real, c_radius : real) : real {
}

function calc_e_theta(t_theta : real, c_theta : real) : real {
}

function calc_e_radius(t_radius : real, c_radius : real) : real {
}

function calc_d_theta(e_theta : real, p_e_theta : real, step_size : real) : real {
}

function calc_d_radius(e_radius : real, p_e_radius : real, step_size : real) : real {
}

function calc_i_theta(e_theta : real, p_e_theta : real, step_size : real) : real {
}

function calc_i_radius(e_radius : real, p_e_radius : real, step_size : real) : real {
}

function calc_v_theta(e_theta : real, i_theta : real, d_theta : real) : real {
}

function calc_v_radius(e_radius : real, i_radius : real, d_radius : real) : real {
}

function update_t_y(target_y : real, belt_speed : real, step_size : real) : real {
}

stm simDetectionBehaviourStm {
    cycleDef cycle == 1
    requires platformConstI

    const HOME_X: real
    const HOME_Y: real
    const DELAY_DISCARD: real
    const WAIT_PICK: real
    const WAIT_DROP: real

    var shape1_x: real
    var shape1_y: real
    var shape1_ts: real
    var shape2_x: real
    var shape2_y: real
    var shape2_ts: real
    var liftTS: real

    input context {
        uses rCameraI
        uses lCameraI
        uses feedbackI
    }

    output context {
        requires platformOpI
        requires OpsCtrI
    }

    initial i1

    state FINDING_FIRST_SHAPE {}
    state FOUND_FIRST_SHAPE_X {}
    state FOUND_FIRST_SHAPE_Y {}
    state FOUND_FIRST_SHAPE_TS {}
    state FOUND_SECOND_SHAPE_X {}
    state FOUND_SECOND_SHAPE_Y {}

    state S_FOUND_SECOND_SHAPE_TS {
        entry $interceptOp(shape1_x, (shape1_y + (shape2_ts - shape1_ts) * BELT_SPEED)); $lower(HEIGHT_TO_SHAPE1)
    }
    state D_FOUND_SECOND_SHAPE_TS {}

    state S_PICK_FIRST_SHAPE {
        entry $pick()
    }
    state D_PICK_FIRST_SHAPE {}

    state S_LIFT_FIRST_SHAPE {
        entry $lift()
    }
    state D_LIFT_FIRST_SHAPE {}

    state S_UNLOAD_ON_SECOND_SHAPE {
        entry $interceptOp(shape2_x, (shape2_y + (liftTS - shape2_ts) * BELT_SPEED)); $lower(HEIGHT_TO_SHAPE2)
    }
    state D_UNLOAD_ON_SECOND_SHAPE {}

    state S_DROP_ON_SECOND_SHAPE {
        entry $drop()
    }
    state D_DROP_ON_SECOND_SHAPE {}

    state S_LIFT_ON_SECOND_SHAPE {
        entry $lift()
    }
    state D_LIFT_ON_SECOND_SHAPE {}

    state GO_TO_HOME_POSITION {
        entry $pidOp(HOME_X, HOME_Y)
    }
    
    transition t_init {
        from i1
        to FINDING_FIRST_SHAPE
    }

    transition t_finding_wait {
        from FINDING_FIRST_SHAPE
        to FINDING_FIRST_SHAPE
        exec
        condition not ($lShapeX?shape1_x)
    }

    transition t1 {
        from FINDING_FIRST_SHAPE
        to FOUND_FIRST_SHAPE_X
        exec
        condition $lShapeX?shape1_x
    }

    transition t2 {
        from FOUND_FIRST_SHAPE_X
        to FOUND_FIRST_SHAPE_Y
        exec
        condition $lShapeY?shape1_y
    }

    transition t3 {
        from FOUND_FIRST_SHAPE_Y
        to FOUND_FIRST_SHAPE_TS
        exec
        condition $lShapeTS?shape1_ts
    }


    transition t_second_wait {
        from FOUND_FIRST_SHAPE_TS
        to FOUND_FIRST_SHAPE_TS
        exec
        condition not ($rShapeX?shape2_x) /\ sinceEntry(FINDING_FIRST_SHAPE) <= DELAY_DISCARD
    }

    transition t4 {
        from FOUND_FIRST_SHAPE_TS
        to FOUND_SECOND_SHAPE_X
        exec
        condition sinceEntry(FINDING_FIRST_SHAPE) <= DELAY_DISCARD /\ $rShapeX?shape2_x
    }

    transition t_discard {
        from FOUND_FIRST_SHAPE_TS
        to FINDING_FIRST_SHAPE
        exec
        condition sinceEntry(FINDING_FIRST_SHAPE) > DELAY_DISCARD
    }

    transition t5 {
        from FOUND_SECOND_SHAPE_X
        to FOUND_SECOND_SHAPE_Y
        exec
        condition $rShapeY?shape2_y
    }

    transition t6 {
        from FOUND_SECOND_SHAPE_Y
        to S_FOUND_SECOND_SHAPE_TS
        exec
        condition $rShapeTS?shape2_ts
    }


    transition t7 {
        from S_FOUND_SECOND_SHAPE_TS
        to D_FOUND_SECOND_SHAPE_TS
        exec
    }

    transition t_lower1_wait {
        from D_FOUND_SECOND_SHAPE_TS
        to D_FOUND_SECOND_SHAPE_TS
        exec
        condition sinceEntry(S_FOUND_SECOND_SHAPE_TS) <= WAIT_LOWER1
    }

    transition t8 {
        from D_FOUND_SECOND_SHAPE_TS
        to S_PICK_FIRST_SHAPE
        exec
        condition sinceEntry(S_FOUND_SECOND_SHAPE_TS) > WAIT_LOWER1
    }


    transition t9 {
        from S_PICK_FIRST_SHAPE
        to D_PICK_FIRST_SHAPE
        exec
    }

    transition t_pick_wait {
        from D_PICK_FIRST_SHAPE
        to D_PICK_FIRST_SHAPE
        exec
        condition sinceEntry(S_PICK_FIRST_SHAPE) <= WAIT_PICK
    }

    transition t10 {
        from D_PICK_FIRST_SHAPE
        to S_LIFT_FIRST_SHAPE
        exec
        condition sinceEntry(S_PICK_FIRST_SHAPE) > WAIT_PICK
    }


    transition t11 {
        from S_LIFT_FIRST_SHAPE
        to D_LIFT_FIRST_SHAPE
        exec
    }

    transition t_lift1_wait {
        from D_LIFT_FIRST_SHAPE
        to D_LIFT_FIRST_SHAPE
        exec
        condition not ($lifted_TS?liftTS)
    }

    transition t12 {
        from D_LIFT_FIRST_SHAPE
        to S_UNLOAD_ON_SECOND_SHAPE
        exec
        condition $lifted_TS?liftTS
    }


    transition t13 {
        from S_UNLOAD_ON_SECOND_SHAPE
        to D_UNLOAD_ON_SECOND_SHAPE
        exec
    }

    transition t_lower2_wait {
        from D_UNLOAD_ON_SECOND_SHAPE
        to D_UNLOAD_ON_SECOND_SHAPE
        exec
        condition sinceEntry(S_UNLOAD_ON_SECOND_SHAPE) <= WAIT_LOWER2
    }

    transition t14 {
        from D_UNLOAD_ON_SECOND_SHAPE
        to S_DROP_ON_SECOND_SHAPE
        exec
        condition sinceEntry(S_UNLOAD_ON_SECOND_SHAPE) > WAIT_LOWER2
    }


    transition t15 {
        from S_DROP_ON_SECOND_SHAPE
        to D_DROP_ON_SECOND_SHAPE
        exec
    }

    transition t_drop_wait {
        from D_DROP_ON_SECOND_SHAPE
        to D_DROP_ON_SECOND_SHAPE
        exec
        condition sinceEntry(S_DROP_ON_SECOND_SHAPE) <= WAIT_DROP
    }

    transition t16 {
        from D_DROP_ON_SECOND_SHAPE
        to S_LIFT_ON_SECOND_SHAPE
        exec
        condition sinceEntry(S_DROP_ON_SECOND_SHAPE) > WAIT_DROP
    }


    transition t17 {
        from S_LIFT_ON_SECOND_SHAPE
        to D_LIFT_ON_SECOND_SHAPE
        exec
    }

    transition t_lift2_wait {
        from D_LIFT_ON_SECOND_SHAPE
        to D_LIFT_ON_SECOND_SHAPE
        exec
        condition not ($lifted_TS?liftTS)
    }

    transition t18 {
        from D_LIFT_ON_SECOND_SHAPE
        to GO_TO_HOME_POSITION
        exec
        condition $lifted_TS?liftTS
    }

    // --- Return home and restart the cycle ---

    transition t19 {
        from GO_TO_HOME_POSITION
        to FINDING_FIRST_SHAPE
        exec
    }
}