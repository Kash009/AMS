#include <fstream>
#include <string>
#include <iostream>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
	string name;
	int age;
	string CNIC;
public:
	Person();
	Person(string,int, string);
	Person(ifstream&);
	virtual void set();
	virtual void view();
	void File_Person(ofstream&);
	string get_name() const;
	int get_age() const;
	string get_CNIC() const;
};

#endif
