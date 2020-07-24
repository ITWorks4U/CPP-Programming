#include <iostream>
#include <new>
#include "inheritance.hpp"
using namespace std;

/*	---	class constructs	---		*/
CEmployee::CEmployee() {
}

CEmployee::~CEmployee() {
}

void CEmployee::manageMoney() {
	cout << "Managing money..." << endl;
}

void CEmployee::manageCustomers() {
	cout << "Managing customers..." << endl;
}

void CClerk::sayHelloToCustomers() {
	cout << "Hello customer!" << endl;
}

/*	---	running sequence	----	*/
int main() {
	CEmployee *employee = new CEmployee();
	CClerk *clerk = new CClerk();
	CClerkAssist *assist = new CClerkAssist();

	employee->manageMoney();
	clerk->manageMoney();
	assist->manageMoney();

	employee->manageCustomers();
	clerk->manageCustomers();
	assist->manageCustomers();

	clerk->sayHelloToCustomers();
	assist->sayHelloToCustomers();

	delete assist;
	delete clerk;
	delete employee;

	return 0;
}
