// Call by value, reference and adress.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>
#include <string>
using namespace std;

void byValue(int a) {
	a = 9;
	cout << "Adress of a in main : " << &a<< endl;
	cout << "Passed Value for 1 in funciton updated to 9 : " << a << endl;
};

void byReference(int &a) {
	cout << "Adress of a in function : " << &a << endl;
	a = 9;
	cout << "Value by reference updated in func : " << a << endl;
}

// pass by adress will create a memory on heap which stores adress of the existing memory

void byAdress(int* a) {
	cout << "Adress of a in function : " << &a << endl;
	*a = 9;
	cout << "Value by reference updated in func : " << *a << endl;
}

int main()
{

	int val = 5;
	cout << "Adress of a in main : " << &val << endl;
	byValue(val);
	cout << "Passed value for 1 in funciton updated to 9 but in main : " << val << endl << endl;

	cout << "Adress of a in main : " << &val << endl;
	byReference(val);
	cout << "Value by reference updated in func but in main : " << val << endl << endl;
	
	int val1 = 5;
	cout << "Adress of a in main : " << &val1 << endl;
	byAdress(&val1);
	cout << "Value by adress updated in func but in main : " << val << endl << endl;

	int dum;
	cin >> dum;
	return 0;
}

