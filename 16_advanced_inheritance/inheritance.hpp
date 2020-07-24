#ifndef INHERITANCE_HPP
#define INHERITANCE_HPP

/*	---	a normal inheritance in C++	---	*/
class CEmployee {
	public:
		CEmployee();
		virtual ~CEmployee();

		void manageMoney();
		void manageCustomers();
};

class CClerk : public CEmployee {
	public:
		CClerk() {}
		~CClerk() {}


		void sayHelloToCustomers();
		/*	some more content	*/
};

class CClerkAssist : public CClerk {
	public:
		CClerkAssist() {}
		~CClerkAssist() {}

		/*	content	*/
};

#endif
