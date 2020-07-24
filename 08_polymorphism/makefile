all:				runner.o polymorphism.o
					g++ -g -Wall -o polymorphism.run runner.o polymorphism.o -lm
					rm runner.o polymorphism.o

runner.o:			runner.cpp polymorphism.hpp
					g++ -c runner.cpp

polymorphism.o:		polymorphism.cpp polymorphism.hpp
					g++ -c polymorphism.cpp

clean:
					rm polymorphism.run
