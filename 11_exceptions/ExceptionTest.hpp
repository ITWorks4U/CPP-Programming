#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

/*	define your own exception class	*/
class CMathError : public exception {
	string message;

	public:
		CMathError(string message) {
			this->message = message;
		}

		virtual ~CMathError() throw() {}							//	int C++: your destructor needs `throw()`, otherwise the compiler is complaining: "looser throw specifier for..."

		const char *getErrorMessage() {							//	throw() "promises" to you not to throw an exception, where
			return this->message.c_str();							//	throw(className, type) "promieses" to you to throw exceptions of given types only
		}															//	since C++11: instead of throw() the keyword noexcept is in use
};

#endif
