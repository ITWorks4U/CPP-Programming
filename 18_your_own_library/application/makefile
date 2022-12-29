#
#	building the application by
#	using a precompiled library

all:						main.cpp
							@g++ -g3 -Wall main.cpp ../library/library.dll -o application
							$(info	application created)

clean:
							@rm application
							$(info application has been removed)