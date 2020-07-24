/**	example for a simple lambda expression	*/
#include <iostream>
using namespace std;

void aNormalFunction() {
	cout << "Hello World!" << endl;
}

int main() {
	//aNormalFunction();
	
	/*	[](){}	←	an empty lambda, which does and returns nothing
	 * 			←	can't handle with variables
	*/
	auto lambdaFunction_01 = []() {
		cout << " This is our first lambda function." << endl;
	};
	
	int a = 0;
	auto lambdaFunction_02 = [a]() {
		return (a + 10);
	};
	
	auto lambdaFunction_03 = [&a]() {
		return (a++);
	};
	
	lambdaFunction_01();
	auto value = lambdaFunction_02();
	cout << " value = " << value << endl;
	
	auto reference = lambdaFunction_03();
	cout << " reference = " << reference << endl;
	
	return 0;
}
