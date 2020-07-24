all:					everything.a
						g++ -g -Wall -o inheritance.run everything.a
						rm everything.a

everything.a:			runner.o sphere.o pyramid.o cube.o baseClass.o
						ar -cr everything.a runner.o sphere.o pyramid.o cube.o baseClass.o
						rm runner.o sphere.o pyramid.o cube.o baseClass.o

runner.o:				runner.cpp inheritClass.hpp
						g++ -c runner.cpp

sphere.o:				sphere.cpp inheritClass.hpp
						g++ -c sphere.cpp

pyramid.o:				pyramid.cpp inheritClass.hpp
						g++ -c pyramid.cpp

cube.o:					cube.cpp inheritClass.hpp
						g++ -c cube.cpp

baseClass.o:			baseClass.cpp baseClass.hpp
						g++ -c baseClass.cpp

clean:
						rm inheritance.run
