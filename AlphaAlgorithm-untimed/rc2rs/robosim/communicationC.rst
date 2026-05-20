package pkg223__sim controller CommunicationC {
	uses CommHw uses Internal sref stm_ref0 = pkg223__sim::Communication
	opref CommunicationC_ref_clone_normal_Communication_Receive_t2_op = pkg223__sim::clone_normal_Communication_Receive_t2_op
	opref CommunicationC_ref_clone_normal_Communication_Broadcast_t4_op = pkg223__sim::clone_normal_Communication_Broadcast_t4_op
	opref CommunicationC_ref_clone_normal_Communication_Receive_t3_op = pkg223__sim::clone_normal_Communication_Receive_t3_op
	opref CommunicationC_ref_clone_normal_Communication_Broadcast_entry = pkg223__sim::clone_normal_Communication_Broadcast_entry
	opref CommunicationC_ref_clone_normal_Communication_Receive_t5_op = pkg223__sim::clone_normal_Communication_Receive_t5_op
	connection stm_ref0 on robots to CommunicationC on robots
	connection stm_ref0 on receive to CommunicationC on receive [ mult ]
	connection stm_ref0 on broadcast to CommunicationC on broadcast [ mult ]
	cycleDef cycle == 1
}

   