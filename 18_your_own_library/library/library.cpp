#include "library.hpp"
#include <iostream>

void print_element(Element e) {
	cout
		<< "ID: " << e.Id << "," << endl
		<< "name: " << e.name << "," << endl
		<< "symbol: " << e.symbol << "," << endl
		<< "melting point: " << e.melting_point << "K, " << endl
		<< "boiling point: " << e.boiling_point << "K, " << endl
		<< "type: ";

	switch(e.t) {
		case Type::SOLID:
			cout << " solid, " << endl;
			break;
		case Type::LIQUID:
			cout << " liquid, " << endl;
			break;
		default:
			cout << " gas, " << endl;
			break;
	}

	cout << "classification: ";
	switch(e.c) {
		case Classification::METAL:
			cout << "metal, " << endl;
			break;
		case Classification::SEMI_METAL:
			cout << "semi metal, " << endl;
			break;
		case Classification::NON_METAL:
			cout << "no metal, " << endl;
			break;
		case Classification::NOBLE_METAL:
			cout << "noble metal, " << endl;
			break;
		default:
			cout << "noble metal, " << endl;
			break;
	}

	cout << "notification(s): ";
	for(Notification n : e.notifications) {
		switch(n) {
			case Notification::NATURAL:
				cout << "natural element" << endl;
				break;
			case Notification::ARTIFICIALLY:
				cout << "artificially element" << endl;
				break;
			case Notification::RADIOACTIVE:
				cout << "radioactive element" << endl;
			default:
				//	UNKNOWN isn't handled here
				break;
		}
	}
}