// FriendClassFunction.cpp : Defines the entry point for the console application.
// Friend funciton can access private and protected members of class

#include "stdafx.h";
#include <iostream>
#include <string>
using namespace std;																																																																	

class Bank {
	string name;
	string city;
	static string kuchB;

protected: // protected members are those which can be directly accessable in child classes
	int staff;

public:

	friend string bankName(Bank const&);
	friend class printNameAndCity;

	Bank(string name="Not Specified", string city = "Not Specified", int staff = 0){
		this->name = name;
		this->city = city;
		this->staff = staff;

		// kuchB = "KuchB";
	}

	void printBank() {
		cout << "Name of bank : " << this->name << endl;
		cout << "City of bank : " << this->city << endl;
		cout << "Staff of bank : " << this->staff << endl << endl;
	}

};

// friend funciton of bank

string bankName(Bank const& b1) {
	return b1.name;
}

// friend class of bank

class printNameAndCity {

public:

	void printOfBank(Bank const& b) {
		cout << "Name from OtherClass : " << b.name << endl;
		cout << "City from OtherClass : " << b.city << endl;
		cout << "Staff (protected member) from OtherClass : " << b.staff << endl << endl;
	}

};

int main() {

	Bank b1, b2("Meezan", "Lahore", 33);
	//cout << Bank::kuchB;

	/*b1.printBank();
	b2.printBank();*/

	/*cout << bankName(b1) << endl;
	cout << bankName(b2) << endl;*/

	printNameAndCity p1;
	p1.printOfBank(b2);

	int dum;
	cin >> dum;
	return 0;
}
