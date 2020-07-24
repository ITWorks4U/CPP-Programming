singleton_normal:			singleton.cpp
							g++ -g -Wall -o singleton.run singleton.cpp

singleton_thread:			singletonRunner.cpp singletonThread.cpp singletonThread.hpp
							g++ -g -Wall -o singletonThreads.run singletonRunner.cpp singletonThread.cpp -lpthread

clean:
							rm *.run
