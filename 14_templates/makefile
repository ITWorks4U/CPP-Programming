#compiling a program which is using template methods/functions
function:					template01.o templateRunner01.o
							g++ -g -Wall -o semiTemplate.run template01.o templateRunner01.o
							rm template01.o templateRunner01.o

template01.o:				template01.cpp template01.hpp
							g++ -c template01.cpp

templateRunner01.o:			templateRunner01.cpp template01.hpp
							g++ -c templateRunner01.cpp

#compiling a program which is using a template class
class:						templateClass.hpp templateRunner02.cpp
							g++ -g -Wall -o fullTemplate.run templateClass.hpp templateRunner02.cpp

#remove running programs
clean:
							rm *.run
