all:							main.o ColorBottle.o DrinkBottle.o
								@g++ -g3 -Wall main.o ColorBottle.o DrinkBottle.o -o application
								@rm *.o
								$(info Application successfully built.)

main.o:							main.cpp ColorBottle.hpp DrinkBottle.hpp
								@g++ -c main.cpp

ColorBottle.o:					ColorBottle.cpp ColorBottle.hpp
								@g++ -c ColorBottle.cpp

DrinkBottle.o:					DrinkBottle.cpp DrinkBottle.hpp
								@g++ -c DrinkBottle.cpp

clean:
								@rm application
								$(info Application successfully removed.)