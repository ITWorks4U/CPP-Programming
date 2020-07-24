all:						runner.o classes.o
							g++ -g -Wall -o classesExample.run runner.o classes.o
							rm runner.o classes.o

runner.o:					runner.cpp classes.hpp
							g++ -c runner.cpp

classes.o:					classes.cpp classes.hpp
							g++ -c classes.cpp

clean:
							rm classesExample.run
