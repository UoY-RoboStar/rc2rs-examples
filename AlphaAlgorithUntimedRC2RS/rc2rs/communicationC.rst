package pre_pkg__sim 
controller CommunicationC {
	uses CommHw uses Internal sref stm_ref0 = pre_pkg__sim::Communication
	opref CommunicationC_ref_clone_normal_Communication_Receive_t5_op = pre_pkg__sim::clone_normal_Communication_Receive_t5_op
	opref CommunicationC_ref_clone_normal_Communication_Receive_t3_op = pre_pkg__sim::clone_normal_Communication_Receive_t3_op
	opref CommunicationC_ref_clone_normal_Communication_Receive_t2_op = pre_pkg__sim::clone_normal_Communication_Receive_t2_op
	opref CommunicationC_ref_clone_normal_Communication_Broadcast_t4_op = pre_pkg__sim::clone_normal_Communication_Broadcast_t4_op
	opref CommunicationC_ref_clone_normal_Communication_Broadcast_entry = pre_pkg__sim::clone_normal_Communication_Broadcast_entry
	connection stm_ref0 on robots to CommunicationC on robots
	connection stm_ref0 on receive to CommunicationC on receive [ mult ]
	connection stm_ref0 on broadcast to CommunicationC on broadcast [ mult ]
	cycleDef cycle == 1
}

interface CommHw {
	event broadcast : main::ID
	event receive : main::ID * main::ID
}

interface Internal {
	event robots : nat 
}  