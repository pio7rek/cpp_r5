//============================================================================
// Name        : cpp_r5.cpp
// Author      : piot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;
void error(const string s) {
	throw runtime_error(s);
}
int main() {
	try {
		//int x1 = narrow_cast<int>(2.9);
		//int x2 = narrow_cast<int>(2.0);
		char c1 = narrow_cast<char>(1066);
		//char c2 = narrow_cast<char>(85);
	}
	catch (runtime_error& e) {
		cerr << "b³¹d: " << e.what() << '\n';
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
