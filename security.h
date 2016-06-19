#include <iostream>
#include <fstream>
#include "Employee.h"
#include "Resource.h"
#include <vector>

using namespace std;

#ifndef SECURITY_H
#define SECURITY_H

class Security
{
private:
	vector<Employee>  Guards;
	vector<Resource> Sec_Item;

public:
	Security();
	Security(vector<Employee>&, vector<Resource>&);
	void Fileall_Guard();
	void Fileall_Resource();
	int total_guards();
	int total_sec_items();
	void Add_Guard(Employee);
	void Add_Guard();
	void display();
	void Add_Resource(Resource);
	void Add_Resource();
	void Dismiss_guard();
	void Discard_Resource();
	void view_guards();
	void view_resources();
	double get_all_costs();
	/*friend ostream& operator << (ostream&, const Security&);
	friend istream& operator >> (istream&, const Security&);*/
};

#endif

