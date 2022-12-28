/*
	argument handling for C++
*/
#include <iostream>
#include <string>
using namespace std;

//	argc	:=	argument counter
//	argv	:=	argument vector

//	the first argument (for C/C++) is the application itself
//	main() doen't comes with string[] as argument
int main(int argc, char *argv[]) {

	//	C-syntax only
	for(int i = 0; i < argc; i++) {
		cout << "argument " << i << ": " << argv[i] << endl;
	}

	return 0;
}

//	"can" be used, however, main only takes 0 or 2 arguments
//	a warning (-Wall) will be displayed here
/*
int main(string s[]) {

	//	Unable to use, because a segmentation fault appears here!
	for(size_t i = 0; i < s->size(); i++) {
		cout << s[i] << endl;
	}

	return 0;
}
*/