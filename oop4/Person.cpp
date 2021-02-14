#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int age;
	int pId;
	string firstName;
	string lastName;
	string midName;
	string address;
	string phoneNumber;
	string gender;

public:
	static int id;
	Person();
	Person(int, int, string, string, string, string, string, string);
	int getAge();
	
	int getId();
	
	string getFirstName();

	string getMidName();
	
	string getLastName();
	
	string getAddress();
	
	string getGender();

	string getPhoneNumber();
	
	void showInfo();
	string fullName();
};
Person::Person() {
	this->age = 0;
	this->pId = 0;
	this->firstName = "";
	this->midName = "";
	this->lastName = "";
	this->address = "";
	this->gender = "";
	this->phoneNumber = "";
}

Person::Person(int id, int age, string firstName, string lastName, // = 0
	string midName, string gender, string address, string phoneNumber) {
	this->pId=(id>=100)? id : Person::id++ ; 
	this->age=age;
	this->firstName=firstName;
	this->lastName=lastName;
	this->midName=midName;
	this->gender=gender;
	this->address=address;
	this->phoneNumber=phoneNumber;
}

int Person::id = 100;


int Person::getAge() {
	return this->age;
}

int Person::getId() {
	return this->pId;
}

string Person::getAddress() {
	return this->address;
}

string Person::getGender() {
	return this->gender;
}

string Person::getPhoneNumber() {
	return this->phoneNumber;
}

string Person::getFirstName() {
	return this->firstName;
}

string Person::getMidName() {
	return this->midName;
}

string Person::getLastName() {
	return this->lastName;
}

void Person::showInfo() {
	cout << "============================================\n";
	cout << "ID: " << getId() <<endl;
	cout<< "First Name: " << getFirstName() << endl;
		cout<< "Midle Name: " << getMidName() << endl;
		cout<< "Last Name: " << getLastName() << endl;
		cout<< "Gender: " << getGender() << endl;
		cout<< "Age: " << getAge() << " years old." << endl;
		cout<< "Address: " << getAddress() << endl;
		cout<< "Phone Number: " << getPhoneNumber() << endl;
	cout << "============================================\n";
}

string Person::fullName() {
	return getFirstName() + " " + getMidName() + " " + getLastName();
}
