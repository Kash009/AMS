#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : public Person
{
private:
	string date_of_joining;
	double salary;

public:
	Employee();
	Employee(string, double, string, string, int);
	Employee(ifstream&);
	void File_Guard(ofstream&);
	void add_employee();
	string Get_name() const;
	void view();
	double get_salary() const;
	friend ostream& operator << (ostream&, const Employee&);
};


#endif

