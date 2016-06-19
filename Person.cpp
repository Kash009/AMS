#include "Person.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

Person :: Person()
{}

Person :: Person(string NAME, int AGE, string ID)
{
	name = NAME;
	age = AGE;
	CNIC = ID;
}

Person::Person(ifstream& in)
{
	char Extra;

	in >> name >> Extra
	>> age >> Extra
	>> CNIC >> Extra;
}

void Person :: set()
{
	cout <<endl<< "Your name   : ";
	fflush(stdin);
	//cin.ignore();
	getline(cin,name);
	fflush(stdin);
	cout <<endl<< "Your age    : ";
	cin >> age;
	cout <<endl<< "Your CNIC # : ";
	fflush(stdin);
	//cin.ignore();
	getline(cin,CNIC);
	fflush(stdin);
	cout <<endl;
}

void Person :: view()
{
	cout << "NAME : "<<name<<endl;
	cout << "AGE  : "<<age<<endl;
	cout << "CNIC : "<<CNIC<<endl;
}

void Person::File_Person(ofstream& out)
{
	out << name << ","
	<< age << ","
	<< CNIC << ",";
}

string Person ::get_name() const
{
	return name;
}

int Person::get_age() const
{
	return age;
}

string Person::get_CNIC() const
{
	return CNIC;
}
