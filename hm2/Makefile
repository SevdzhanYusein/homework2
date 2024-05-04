
program: program.o swap.o
	g++ program.o swap.o -o program

program.o: program.cpp
	g++ -c program.cpp -o program.o

swap.o: swap.cpp
	g++ -c swap.cpp -o swap.o

.PHONY: clean
clean:
	rm -f *.o program
