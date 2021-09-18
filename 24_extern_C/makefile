run_c:						my_math_runner.c library.dll
							gcc -g3 -Wall -o my_math_c.run my_math_runner.c library.dll

run_cpp:					my_math_runner.cpp library.dll
							g++ -g3 -Wall -o my_math_cpp.run my_math_runner.cpp library.dll

library.dll:				my_math_functions_cpp.o
							ar cr library.dll my_math_functions_cpp.o
							rm *.o

my_math_functions_cpp.o:	my_math_functions_cpp.cpp my_math.h
							g++ -c my_math_functions_cpp.cpp

clean:
							rm *.run