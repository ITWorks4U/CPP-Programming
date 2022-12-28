#include <iostream>
using namespace std;

/*
	abusing main() function
	a main() function must exist exactly once only
*/

//	default usage of main
int main() {
	return 0;
}

//	in C++ hardly used
int main(void) {														//	in C++: identical to main()
	return 0;
}

//	used for program arguments
int main(int argc, char *argv[]) {										//	alternative for argv: **argv
	return 0;
}

/*
	in contrast to C it's not allowed to define
	a main function of type void

void main() {}

void main(void) {}

void main(int argc, char **argv) {}
*/