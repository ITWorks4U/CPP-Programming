auto_ptr:		auto_ptr.o
				g++ -g3 -Wall -o smart_pointers_01.run auto_ptr.o
				rm auto_ptr.o

unique_ptr:		unique_ptr.o
				g++ -g3 -Wall -o smart_pointers_02.run unique_ptr.o
				rm unique_ptr.o

shared_ptr:		shared_ptr.o
				g++ -g3 -Wall -o smart_pointers_03.run shared_ptr.o
				rm shared_ptr.o

weak_ptr:		weak_ptr.o
				g++ -g3 -Wall -o smart_pointers_04.run weak_ptr.o
				rm weak_ptr.o

#----------

auto_ptr.o:		auto_ptr.cpp
				g++ -c auto_ptr.cpp

unique_ptr.o:	unique_ptr.cpp
				g++ -c unique_ptr.cpp

shared_ptr.o:	shared_ptr.cpp
				g++ -c shared_ptr.cpp

weak_ptr.o:		weak_ptr.cpp
				g++ -c weak_ptr.cpp

#----------

clean:
				rm *.run
