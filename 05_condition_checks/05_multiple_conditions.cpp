#include <iostream>
using namespace std;

int main() {
	bool statementTrue = true;
	bool statementFalse = false;
	int number = 100;

	//	union of conditions:
	//	every sub condition must be true to become >true< as a result
	//	can never be >true<, because:
	//	if (true AND false AND true) is FALSE
	if (statementTrue && statementFalse && number) {
		cout << "You'll never see this text." << endl;
	}

	//	independent check of sub conditions:
	//	at least one sub condition must be true to become >true> as a result
	//	if (true OR false OR true) is TRUE
	if (statementTrue || statementFalse || number) {
		cout << "You'll see that text, of course!" << endl;
	}

	//	stacked condition checks
	if (statementTrue && number > 50) {							//	true AND true => true
		//	...
	} else if (statementTrue && number > 100) {					//	true AND false => false
		//	...
	} else if (!statementFalse && number < 200) {				//	true AND true => true
		//	...
	} else {
		//	...
	}

	return 0;
}