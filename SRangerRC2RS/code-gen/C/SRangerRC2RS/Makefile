
build: ../pkg224_SimFW_sim-gen/pkg224_SimFW_sim_PI.o
	@echo "Building executable"
	gcc -o main src/main.c src/pkg224_SimFW_sim_PD.c ../pkg224_SimFW_sim-gen/pkg224_SimFW_sim_PI.o -Iinclude -I../pkg224_SimFW_sim-gen/include 
	
../pkg224_SimFW_sim-gen/pkg224_SimFW_sim_PI.o: 
	@echo "Building pkg224_SimFW_sim_PI.o"
	make -C ../pkg224_SimFW_sim-gen
	
clean:
	rm -f pkg224_SimFW_sim_PD.o main


