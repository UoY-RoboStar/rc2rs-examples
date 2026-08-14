
build: ../SimMovement-gen/SimMovement_PI.o
	@echo "Building executable"
	gcc -o main src/main.c src/SimMovement_PD.c ../SimMovement-gen/SimMovement_PI.o -Iinclude -I../SimMovement-gen/include 
	
../SimMovement-gen/SimMovement_PI.o: 
	@echo "Building SimMovement_PI.o"
	make -C ../SimMovement-gen
	
clean:
	rm -f SimMovement_PD.o main


