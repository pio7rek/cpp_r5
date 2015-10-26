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

int main() {
	vector<double> temps;
	for (double temp; cin >> temp;) {
		temps.push_back(temp);
	}
	const double start_max_temp = -1000;
	const double start_min_temp = 1000;
	double min_t = start_min_temp;
	double max_t = start_max_temp;
	double sum = 0;

	for(double x : temps) {
		if (x>max_t) max_t = x;
		if (x<min_t) min_t = x;
		sum+=x;
	}
	cout << "min temp: " << min_t << '\n';
	cout << "max temp: " << max_t << '\n';
	cout << "œr. temp: " << sum/temps.size() << '\n';

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
