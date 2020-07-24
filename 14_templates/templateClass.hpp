/*	demonstration of a template class	*/
#ifndef TEMPLATE_CLASS_HPP
#define TEMPLATE_CLASS_HPP

using namespace std;

template <class T>
class CCalculator {
	T number01;
	T number02;

	public:
		CCalculator(T number01, T number02) {
			this->number01 = number01;
			this->number02 = number02;
		}

		const T addNumbers() {
			return (this->number01 + this->number02);
		}

		const T subtractNumbers() {
			return (this->number01 - this->number02);
		}

		const T multiplyNumbers() {
			return (this->number01 * this->number02);
		}

		const T divideNumbers() {
			return (this->number01 / this->number02);
		}
};

#endif
