// Static Functions And Members.cpp : Defines the entry point for the console application.
//

// Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// It is initialized before any object of this class is created, even before the main starts.
// It is visible only within the class, but its lifetime is the entire program.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Complex {

	int real;
	int iota;

public:

	static int counter;

	Complex(int real=0, int iota=0) { // default perimetrize constructor
		this->real = real;
		this->iota = iota;
		Complex::counter++;
	}

	static void updateCounter() {
		// cout << "Counter updatding.\n";
		Complex::counter++;
	}

	static Complex sum(Complex &c1 , Complex &c2) {

		Complex comp;

		comp.real = c1.real + c2.real;
		comp.iota = c1.iota + c2.iota;

		return comp;
	}

	static Complex subtract(Complex const& c1, Complex const& c2) {
		
		Complex comp;

		comp.real = c1.real - c2.real;
		comp.iota = c1.iota - c2.iota;

		return comp;
	}

	void displayComplex() {
		cout << this->real << " + " << this->iota << "i" << endl;
	}

	~Complex() {
		cout << "Destoryed\n";
		Complex::counter--;
	}

};

int Complex::counter = 0;

int main()
{

	Complex c1(2,3), c2(4,5);

	c1.displayComplex();
	c2.displayComplex();
	cout << "\nCounter : " << Complex::counter << endl;

	Complex::sum(c1, c2).displayComplex();
	cout << "\nCounter : " << Complex::counter << endl;
	Complex::subtract(c1, c2).displayComplex();

	cout << "\nCounter : " << Complex::counter << endl ;

	int dum;
	cin >> dum;
	return 0;
}


