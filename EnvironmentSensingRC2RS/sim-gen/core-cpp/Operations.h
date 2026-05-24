#ifndef ROBOCALC_INTERFACE_OPERATIONS_H_
#define ROBOCALC_INTERFACE_OPERATIONS_H_

#include "HardwareComponent.h"
#include "DataTypes.h"

class Operations : public HardwareComponent {
public:
	Operations();
	virtual ~Operations();
	//true
	//std::shared_ptr<stop> Operations_stop;
	//false
	//true
	//std::shared_ptr<moveForward> Operations_moveForward;
	//false
	//true
	//std::shared_ptr<reverse> Operations_reverse;
	//false
	//true
	//std::shared_ptr<moveTowards> Operations_moveTowards;
	//false
	//true
	//std::shared_ptr<changeDirection> Operations_changeDirection;
	//false

	virtual void Sensors();
	virtual void Actuators();


};


#endif
