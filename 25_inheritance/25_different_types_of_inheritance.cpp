#include <iostream>
using namespace std;

class Coordinates {
	public:
		int x = 1;
	protected:
		int y = 2;
	private:
		int z = 3;

	public:
		Coordinates() {}
		virtual ~Coordinates() {}

		int getY() {
			return this->y;
		}

		int getZ() {
			return this->z;
		}
};

class Point : public Coordinates {
	public:
		int getY() {
			return this->y;
		}

		int getX() {
			return this->x;
		}
};

int main() {
	// Point p;
	// cout << "{" << p.x << ", " << p.getY() << ", " << p.getZ() << "}" << endl;						//	public
	// cout << "{" << p.getX() << ", " << p.getY() << /*", " << p.getZ() <<*/ "}" << endl;					//	protected / private

	Coordinates *c = new Coordinates();
	cout << "{" << c->x << ", " << c->getZ() << "}" << endl;
	delete c;

	/*
		private:	no polymorphism
		protected:	no polymorphism
		public:		default polymorphism

		getY() only, if Coordinates offers getY() as public
	*/

	c = new Point();
	cout << "{" << c->x << ", " << c->getY() << ", " << c->getZ() << "}" << endl;
	delete c;

	return 0;
}