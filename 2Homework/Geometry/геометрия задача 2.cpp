﻿#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
	int b = 1;
	int a = 0;
	int c = 0;
	cout << "Write the amount of corners:";
	cin >> c;
	a = c * 2;

	int* array = new int[a];
	for (int i = 0; i < a; i++) {
		cout << "Write the x" << b << endl;
		cin >> array[i];
		cout << "Write the y" << b << endl;
		cin >> array[i += 1];
		b += 1;


	}
	for (int i = 0; i < a; i++) {
		cout << array[i]<<" ";

	}
	cout << " " << endl;
	double r1 = sqrt(pow(array[2] - array[0], 2) + pow(array[3] - array[1], 2));
	double r2 = sqrt(pow(array[4] - array[2], 2) + pow(array[5] - array[3], 2));
	double r3 = sqrt(pow(array[6] - array[4], 2) + pow(array[7] - array[5], 2));
	double r4 = sqrt(pow(array[0] - array[6], 2) + pow(array[1] - array[7], 2));
	float P = r1 + r2 + r3 + r4;
	cout << "P = " << P;
	return 0;
}

