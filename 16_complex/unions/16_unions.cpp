/*
	unions are rarely used, because
	the different members of a union
	always changes their value on access
	modifications

	an union requires less space, because the space
	will be determined on the largest member

	In C:
		-	an union contains members only
		-	every member is unable to initialize inside of the union
	In C++:
		-	may initialize up to one member
		-	may contain functions, constructors, ...
*/
#include <iostream>
#include <cstring>
using namespace std;

//	unions may contain nothing
union EmptyUnion {};

union MyUnion {
	char sign;
	int index = 400;													//	up to one elemnt can be initialized at beginning
	long identification;
	float percent;
	int another_index;
	char word[20];
	//...
};

int main() {
	//	in C: 0 bytes, in C++: 1 byte!
	cout << "amount of bytes for EmptyUnion: " << sizeof(EmptyUnion) << endl;

	//	accessing to members
	MyUnion mu;
	mu.sign = 'A';
	mu.identification = 123L;
	mu.percent = 0.76;
	mu.another_index = 700;
	memset(mu.word, (int) 'F', 10);										//	last accessing modifies the previous members

	cout << "amount of bytes for \"mu\": " << sizeof(mu) << endl;

	//	Surprised?
	cout <<	mu.sign		<< ", " << endl <<
		 	mu.index	<< ", " << endl <<
			mu.identification	<< ", " << endl <<
			mu.percent	<< ", " << endl <<
			mu.another_index	<< ", " << endl <<
			mu.word
		<< endl;

	//	identical behavior like in C

	return 0;
}