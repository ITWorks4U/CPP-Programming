#include <iostream>
#include <new>
#include <vector>
#include "Diamond.hpp"
using namespace std;

int main() {
	vector<CBase *> collector;
	
	collector.push_back(new CDerived01);
	collector.push_back(new CDerived02);
	collector.push_back(new CDiamond);

	for (int i = 0; i < collector.size(); i++) {
		cout << " " << collector[i]->identifyClass() << endl;
	}

	return 0;
}
