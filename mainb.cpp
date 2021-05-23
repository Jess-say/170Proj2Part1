#include <iostream>
#include "BE.h"

using namespace std;

int main()
{
	cout << "Welcome to Bao and Jessie's Feature Selection Algorithm\n";

	int fnum, algo = 2;
	cout << "\nEnter total number of features: ";
	cin >> fnum;

	cout << "\nType the number of algorithm you want to run\n";
	cout << "1. Forward Selection\n";
	cout << "2. Backward Selection\n";
	//cin >> algo;

	feature temp;
	BE* back_elim;
	back_elim = new BE();

	if (algo == 1) {
		// Bao's algo
	}
	else if (algo == 2) {
		// backward elimination
		//temp.featnum = fnum;
		back_elim->start(fnum);

	}

	return 0;
}