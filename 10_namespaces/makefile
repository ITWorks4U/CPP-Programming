n_vector:			Vector.o Physic.a Math.a
					g++ -g -Wall -o namespace.run Vector.o Physic.a Math.a -lm
					rm *.a Vector.o

Physic.a:			VectorMovement.o
					ar -cr Physic.a VectorMovement.o
					rm VectorMovement.o

Math.a:				VectorCoordinate.o
					ar -cr Math.a VectorCoordinate.o
					rm VectorCoordinate.o

Vector.o:			Vector.cpp
					g++ -c Vector.cpp

VectorMovement.o:	VectorMovement.cpp VectorMovement.hpp
					g++ -c VectorMovement.cpp

VectorCoordinate.o:	VectorCoordinate.cpp VectorCoordinate.hpp
					g++ -c VectorCoordinate.cpp

clean:
					rm namespace.run

##########################
anonymous:			anonymousNamespace.cpp
					g++ -g -Wall -o anonymousNamespace.run anonymousNamespace.cpp

rm_anonymous:
					rm anonymousNamespace.run
					
