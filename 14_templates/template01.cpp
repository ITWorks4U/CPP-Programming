#include <iostream>
#include "template01.hpp"
using namespace std;

CSemiTemplate::CSemiTemplate() {
	this->array = NULL;
}

CSemiTemplate::CSemiTemplate(double *holder) {
	this->array = reinterpret_cast<double *>(holder);
}

CSemiTemplate::~CSemiTemplate() {
	delete this->array;
}

template <class T> const T CSemiTemplate::getMaximum(T a, T b) {
	if (a > b) {
		return a;
	}

	return b;
}

template <typename lookThere> void CSemiTemplate::printThatType(lookThere anything) {
	cout << " anything = " << anything << endl;
}

template const int CSemiTemplate::getMaximum<int>(int a, int b);
template const float CSemiTemplate::getMaximum<float>(float a, float b);

template void CSemiTemplate::printThatType<float>(float anything);
