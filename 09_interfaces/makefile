all:						interface.o runner.o
							g++ -g -Wall -o interfaceExample.run interface.o runner.o
							rm interface.o runner.o

interface.o:				interface.cpp interface.hpp
							g++ -c interface.cpp

runner.o:					runner.cpp interface.hpp
							g++ -c runner.cpp

clean:
							rm interfaceExample.run
