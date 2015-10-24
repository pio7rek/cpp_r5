//============================================================================
// Name        : cpp_r5.cpp
// Author      : piot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Zlooo{};

int pole(int a, int b) {
	if (a<=0 || b<=0) throw Zlooo{};
	return a*b;
}

int main() {
	try {
		int x=-1;
		int y=3;
		int z=0;

		//int pole1 = pole(y, y);
		//int pole2 = pole(x, y);
		int pole3 = pole(z, y);
	}
	catch (Zlooo&) {
		cout << "Z³y argument w pole()\n";
	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
