// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

class Person {

	// no need to write private because by default all members are private in cpp

	string name;
	int age;
	int cnic;

public:
	Person(string name = "", int age = 1, int cnic = 1) {
		cout << "Person constructor running";
		this->name = name;
		this->age = age;
		this->cnic = cnic;
		//cout << this;
	}

	void setPerson(string name, int age, int cnic) {
		this->name = name;
		this->age = age;
		this->cnic = cnic;
	}

	string getPersonName() {
		return this->name;
	}

	void printPerson() {
		cout << "\nName : " << this->name << endl;
		cout << "Age : " << this->age << endl;
		cout << "CNIC : " << this->cnic << endl;
	}

};

class Student : private Person {

private:

	int semester;
	int rollNo;

public:

	//*** bototm three given functions are overloaded functions

	//Student() { // default constructor
	//	cout << "Running khali wala\n";
	//	this->name = "";
	//	this->rollNo = 1;
	//}

	//Student(string name) { // for partial perimeters constructor
	//	cout << "Running name wala\n";
	//	this->name = name;
	//	this->rollNo = 1;
	//}

	//Student(string name , int rollNo) { // default perimetrize constructor
	//	cout << "Running default wala\n";
	//	this->name = name;
	//	this->rollNo = rollNo;
	//}

	// ***** Single solution for all overloaded functions

	Student(string name = "", int age = 1, int cnic = 1, int semester = 1, int rollNo = 1) { // default perimetrize constructor
		this->setPerson(name, age, cnic);
		this->semester = semester;
		this->rollNo = rollNo;

		cout << "Running sb k liay\n";
	}

	string getName() {
		return this->getPersonName();
	}

	int getRollNo() {
		return this->rollNo;
	}

	void printStudent() {
		this->printPerson();
		cout << "Semester : " << this->semester << endl;
		cout << "Roll No : " << this->rollNo << endl;
	}

};

int main()
{
	int a;
	// cout << "Atisam here";

	Student st1, st2("Atisam", 22, 38201, 6, 44), st3("Abid");

	//cout << st2.getName() << '\n'; //cascading
	//cout << st2.getRollNo() << endl;

	Person p1("Jahanzaib");

	// cout << p1.name;

	st2.printStudent();

	cin >> a;
	// sleep(100);
	return 0;
}

