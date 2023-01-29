#include <iostream>
using namespace std;

/*
	Overriding operators allows you to define
	your own operators, e. g. arithmetic stuff,
	like addition, substraction etc.
*/

class Point {
	int x, y;
	Point() {}

	public:
		Point(int x, int y) {
			this->x = x;
			this->y = y;
		}

		virtual ~Point() {}

		int getX() {
			return this->x;
		}

		int getY() {
			return this->y;
		}

		/*
			Overriding operators starts with the keyword
			operator followed by an operator sign, like
			+, -, *, /, etc. You can also use this to
			define a custom way for a memory allocation.
		*/
		Point operator +(Point &source) {
			Point p;
			p.x = this->x + source.x;
			p.y = this->y + source.y;

			return p;
		}

		Point operator -(Point &source) {
			Point p;
			p.x = this->x - source.x;
			p.y = this->y - source.y;

			return p;
		}
};

int main() {
	Point p1(3,4);																							//	normal way as we
	cout << "p1 = {" << p1.getX() << ", " << p1.getY() << "}" << endl;										//	already know

	Point p2(10,11);
	cout << "p2 = {" << p2.getX() << ", " << p2.getY() << "}" << endl;

	Point p3 = p1 + p2;																						//	since our class offers
	cout << "p3 = {" << p3.getX() << ", " << p3.getY() << "}" << endl;										//	operator overloading, it's
																											//	possible to create objects
	Point p4 = p1 -p2;																						//	with a "+" and also a "-"
	cout << "p4 = {" << p4.getX() << ", " << p4.getY() << "}" << endl;

	return 0;
}