/*
	You may break down your
	worklflow for C syntax,
	however, it's not recommended.
*/

#include <iostream>
using namespace std;

int main() {
	char content[20];														//	holds up to 19(!) readable characters
	cout << "enter anything: ";

	cin >> content;
	cout << "content contains: " << content << endl;

	/*
		critical:
			-	cin doesn't check a limitation for c-string
			-	content may hold more than 20 characters, whereas
				every character left is trying to store to content
				=> accessing and modifying a foreign adress memory
				=> application crashes (segmentation fault)
	*/

	return 0;
}