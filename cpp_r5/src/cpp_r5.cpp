//============================================================================
// Name        : cpp_r5.cpp
// Author      : piot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void error(const string s) {
	throw runtime_error(s);
}
int main() {
	try {
		double d;
		cin >> d;
		if (!cin) {
			error("cos posz³o nie tak z wczytaniem liczby!\n");
		}
	}
/*	catch (runtime_error& e) {
		cerr << "runtime_error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "nieznany b³¹d\n";
		return 2;
	}*/
	catch (out_of_range& e) {
		return 3;
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
