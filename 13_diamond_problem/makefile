runner:					DiamondRunner.o Diamond.o
						g++ -g -Wall -o problem.run DiamondRunner.o Diamond.o
						rm DiamondRunner.o Diamond.o

DiamondRunner.o:		DiamondRunner.cpp Diamond.hpp
						g++ -c DiamondRunner.cpp

Diamond.o:				Diamond.cpp Diamond.hpp
						g++ -c Diamond.cpp

clean:
						rm problem.run
