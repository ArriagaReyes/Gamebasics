output: main.o basics.o
	g++ main.o basics.o -o build

main.o: main.cpp
	g++ -c main.cpp

basics.o: src/basics.cpp include/basics.hpp
	g++ -c src/basics.cpp

clear:
	rm *.o build