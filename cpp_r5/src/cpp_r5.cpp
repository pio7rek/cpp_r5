//============================================================================
// Name        : cpp_r5.cpp
// Author      : piot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	try {
		vector<int> v;
		for (int x; cin >> x;) {
			v.push_back(x);
		}
		for (unsigned int i=0; i<=v.size(); ++i) {
			cout << "v[" << i << "] = " << v.at(i) << '\n';
		}
	}
	catch (out_of_range&) {
		cerr << "Ops! Range Error!\n";
		return 1;
	}
	catch (...) {
		cerr << "Ups! Wyst¹pi³ jakiœ b³¹d\n";
		return 2;
	}
	return 0;
}
