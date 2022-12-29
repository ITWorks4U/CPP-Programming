/*
	Contains the main function only.
	The library has been created before.
*/

#include <iostream>
#include "../library/library.hpp"
using namespace std;

int main() {
	//	----------
	//	Gold
	//	----------
	Element gold;
	gold.Id = 79;
	gold.name = "Gold";
	gold.symbol = "Au";
	gold.melting_point = 1337.33;
	gold.boiling_point = 3129.0;
	gold.t = Type::SOLID;
	gold.c = Classification::NOBLE_METAL;
	gold.notifications.push_back(Notification::NATURAL);

	print_element(gold);

	cout << endl << endl << endl;

	//	----------
	//	Radium
	//	----------
	Element radium;
	radium.Id = 88;
	radium.name = "Radium";
	radium.symbol = "Ra";
	radium.melting_point = 973.0;
	radium.boiling_point = 1413.0;
	radium.t = Type::SOLID;
	radium.c = Classification::METAL;
	radium.notifications.push_back(Notification::RADIOACTIVE);
	radium.notifications.push_back(Notification::NATURAL);

	print_element(radium);

	return EXIT_SUCCESS;
}