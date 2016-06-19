#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Employee::Employee()
{}

Employee::Employee(string NAME, double SALARY, string ID, string DOJ, int AGE) : Person(NAME,AGE,ID),
salary(SALARY), date_of_joining(DOJ)
{}

Employee::Employee(ifstream& in)
{
	char Extra;
	Person P(in);

	in >> salary >> Extra
	>> date_of_joining;
}

void Employee::File_Guard(ofstream& out)
{
	File_Person(out);
	out << salary << ","
	<< date_of_joining << "\n";
}

double Employee ::get_salary() const
{
	return salary;
}

void Employee::add_employee()
{
	Person ::set();
	cout << endl << "Salary >> ";
	cin >> salary;
	cout << endl << "Date Of Joining >> ";
	cin >> date_of_joining;
	cout << endl;
}

string Employee:: Get_name() const
{
	return this->get_name();
}

ostream& operator << (ostream& out, const Employee& E)
{
	out << " Salary          : " << E.salary << "  \n";
	out << " Date Of Joining : " << E.date_of_joining << "  \n";
	out << " Employee Job    : " << " GUARD "<<endl;

	return out;
}

void Employee :: view()
{
	Person ::view();
	cout << *(this)<<endl;
}
