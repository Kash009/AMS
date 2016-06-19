#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#ifndef RESOURCE_H
#define RESOURCE_H

class Resource
{
private:
	string name;
	double price;
	string manufacturer;
	string bar_code;
	string date_of_purchase;
	string date_of_expiry;
public:
	Resource();
	Resource(string, double, string, string, string, string);
	Resource(ifstream&);
	void File_Resource(ofstream& out);
	void add_resource();
	void view_resource();
	string get_name() const;
	double get_cost() const;
};

#endif

