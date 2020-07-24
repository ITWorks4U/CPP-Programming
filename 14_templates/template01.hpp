/*	demonstration of a template pattern	*/
#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP
#include <iostream>
using namespace std;

class CSemiTemplate {
	double *array;
	/*	...	*/

	public:
		CSemiTemplate();
		CSemiTemplate(double *holder);
		~CSemiTemplate();

		/*	...any other methods here...	*/

		/*
		 *	To ensure to use a template method just write the keyword
		 *	`template <class T>` in front of the method, where `T` is
		 *	not required to use. You may also use any other alias name.
		 *
		 *	Unlike `class` you can use `typename`, too
		*/
		template <class T> const T getMaximum(T a, T b);

		template <typename lookThere> void printThatType(lookThere anything);
};

/*
 *	Attention:	by using template methods the implementations won't cooperate
 *				with the compiler if these are in an external source file,
 *				unless we're using a more detailed definition,
 *				thus we've implemented the definitions in this header file.
*//*
CSemiTemplate::CSemiTemplate() {
	this->array = NULL;
}

CSemiTemplate::CSemiTemplate(double *holder) {
	this->array = reinterpret_cast<double *>(holder);
}

CSemiTemplate::~CSemiTemplate() {
	delete this->array;
}*/

/*	implementations of our template methods
template <class T> const T CSemiTemplate::getMaximum(T a, T b) {
	if (a > b) {
		return a;
	}

	return b;
}

template <typename lookThere> void CSemiTemplate::printThatType(lookThere anything) {
	cout << " anything = " << anything << endl;
}*/
#endif
