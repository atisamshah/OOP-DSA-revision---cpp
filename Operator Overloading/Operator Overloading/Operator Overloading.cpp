// Operator Overloading.cpp : Defines the entry point for the console application.
//

// cout and cin for class
// shallow vs deep copy
//friend function & friend classes

#include "stdafx.h";
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

	string make;
	int makeYear;
	int cc;
	
public:

	Vehicle(string make="Dummy", int year=1900, int cc=0) {
		this->make = make;
		this->makeYear = year;
		this->cc = cc;
	}

	void setMake(string make) {
		this->make = make;
	}

	string getMake() {
		return this->make;
	}

	void setCC(int cc) {
		this->cc = cc;
	}

	int getCC() {
		return this->cc;
	}

	void setMakeYear(int year) {
		this->makeYear = year;
	}

	int getMakeYear() {
		return this->makeYear;
	}

	void printVehicle() {
		cout << "Vechicle Name: " << this->make << endl;
		cout << "Vechicle Make Year: " << this->makeYear << endl;
		cout << "Vechicle CC : " << this->cc<< endl << endl;
	}

	Vehicle operator+ (Vehicle &v) {
		cout << "+ operator is calling." << endl;
		return v;
	}

	// here cout is our first perameter

	// printing vechicle using <<
	//friend ostream operator<< (ostream out, Vehicle const &v) { // const here to avoid any updation in property of v
	//	out << "Vechicle Name: " << v.make << endl;
	//	out << "Vechicle Make Year: " << v.makeYear << endl;
	//	out << "Vechicle CC : " << v.cc << endl << endl;

	//	return out;
	//}

	// taking input using input operator
	/*friend istream &operator>> (Vehicle &v) {

	}*/

};

int main() {

	cout << "What is there!";

	Vehicle v1, v2("Corolla"), v3("Bugatti", 2013), v4("Alsvin", 2022, 2200) ;

	/*v1.printVehicle();
	v2.printVehicle();
	v3.printVehicle();
	v4.printVehicle();*/

	(v2 + v3).printVehicle();
	(v1 + v4).printVehicle();

	/*cout << v1;
	cout << v2;
	cout << v3;
	cout << v4;*/

	int dummy;
	cin >> dummy;
	return 0;
}

