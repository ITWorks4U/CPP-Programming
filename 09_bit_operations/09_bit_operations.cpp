/*
	Every programming comes with an option for bit operations.
	Bit operations allows you to handle operations faster. Mostly. 
*/

#include <iostream>
using namespace std;

int main() {
	/*
		size of an integer value: 4 bytes
		maximum number of an integer value (in C++):		2,147,483,647
		binary representation:	11111111 11111111 11111111 11111111
	*/
	int a = 42;													/*	00000000 00101010	*/
	int b = 9001;												/*	00100011 00101001	*/

	//	-----------
	//	bit operations
	//	-----------
	cout << "a AND b = " << (a & b) << endl;					//	a AND b			=>		40
	cout << "a OR b = " << (a | b) << endl;						//	a OR b			=>		9003
	cout << "a XOR b = " << (a ^ b) << endl;					//	a XOR b			=>		9003
	cout << "NOT a = " << (~a) << endl;							//	NOT a			=>		-43
	cout << "NOT a AND b = " << (~a & b) << endl;				//	NOT a AND b		=>		8961
	cout << "NOT (a AND b) = " << (~(a & b)) << endl;			//	NOT (a AND b)	=>		NAND(a, b)	=> -41
	cout << "NOT (a AND NOT b) = " << (~(a & ~b)) << endl;		//	NOT (a AND NOT b)	=>	NOT a OR b	=>	-3
	cout << "NOT (a OR b) = " << (~(a | b)) << endl;			//	NOT a OR b		=>		NOR(a, b)	=>	-9004
	cout << "NOT (a XOR b) = " << (~(a ^ b)) << endl;			//	NOT a XOR b		=>		NXOR(a, b)	=>	-8964

	//	-----------
	//	What happens here?
	//	-----------
	cout << "a AND b = " << (a and b) << endl;					//	Surprised? Often misinterpreted => it's NOT the same like above!
	cout << "a OR b = " <<  (a or b) << endl;
	cout << "a XOR b = " <<  (a xor b) << endl;
	cout << "not a = " <<  (not a) << endl;

	//	-----------
	//	bit shifting
	//	-----------
	int bitshift = 3;
	cout << "a << 3 = " << (a << bitshift) << endl;				//	left shifting	42 becomes 336
	cout << "a >> 3 = " << (a >> bitshift) << endl;				//	right shifting	42 becomes 5

	//	-----------
	//	arithmetic
	//	-----------
	cout << a << " is odd or even? => " << ((a % 2 == 0) ? "even" : "odd") << endl;
	cout << b << " is odd or even? => " << ((b % 2 == 0) ? "even" : "odd") << endl;

	cout << a << " is odd or even? => " << (((a & 2) == 0) ? "even" : "odd") << endl;
	cout << b << " is odd or even? => " << (((b & 2) == 0) ? "even" : "odd") << endl;

	return EXIT_SUCCESS;
}