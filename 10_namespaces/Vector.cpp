#include <iostream>
#include <new>
#include "VectorMovement.hpp"
#include "VectorCoordinate.hpp"
using namespace std;							//	←	now you should know why you need this namespace, if you want to use cout, cin, endl or else, which is defined in std

/*
 *	There're two differnet valid variants:
 *		1:	using directive, where you should notify to may get a compiler error, see example below
 *		2:	namespace_name::class_name / method()
*/
using namespace Physic;
using namespace Math;

int main() {
	Math::CVector *vec01 = new Math::CVector(-3.0, 2.9, -0.1, 0.0);
	Math::CVector *vec02 = new Math::CVector(2.5, 0.0, 1.2, 15.0);
	Physic::CVector *vecP = new Physic::CVector(10.0, 1.0, Physic::DYNAMIC);

/*
 *	↓ won't compile, because we have still two classes with the same name, therefore
 *	↓ the compiler is telling you: reference to ‘CVector’ is ambiguous
 *
 *	CVector *vec01 = new CVector(-3.0, 2.9, -0.1, 0.0);
 *	CVector *vec02 = new CVector(2.5, 0.0, 1.2, 15.0);
 *	CVector *vecP = new CVector(10.0, 1.0, DYNAMIC);
*/
	
	delete vecP;
	delete vec02;
	delete vec01;

	return 0;
}
