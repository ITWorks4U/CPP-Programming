#
#	makefile to create a library instead of a runtime
#
lib:					library.o
						@ar cr library.dll library.o
						@rm library.o
						$(info	library created)

library.o:				library.cpp library.hpp
						@g++ -c -Wall library.cpp

clean:
						@rm library.dll
						$(info library has been removed)