#include <iostream>
#include <new>
#include "const_keyword.hpp"
using namespace std;

int main() {
	CVector3 *vec2D = new CVector3(5.0, 3.0);
	CVector3 *vec3D = new CVector3(2.0, 1.0, 4.0);
	CVector3 *vecUnknown = vec2D->add(vec2D, vec3D, true);

	cout << " vec2D: {";
	cout << vec2D->getPosX() << ", " << vec2D->getPosY() << ", " << vec2D->getPosZ() << "}" << endl;

	cout << " vec3D: {";
	cout << vec3D->getPosX() << ", " << vec3D->getPosY() << ", " << vec3D->getPosZ() << "}" << endl;

	cout << " vecUnknown: {";
	cout << vecUnknown->getPosX() << ", " << vecUnknown->getPosY() << ", " << vecUnknown->getPosZ() << "}" << endl;

	delete vecUnknown;
	delete vec3D;
	delete vec2D;

	return 0;
}
