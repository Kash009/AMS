#include "Security.h"
#include "Flat.h"
#include "Shop.h"
#include "Employee.h"
#include "Resource.h"
#include "Utility.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment
{
private:
	string name;
	Security S;
	vector<Flat> F;
	vector<Shop> Sh;
	vector<Utility> U;

public:
	Apartment();
	Apartment(string);
	Apartment(string,Security,vector<Flat>,vector<Shop>);
	void Fileall_Flats();
	void Fileall_Shop();
	void Fileall_Utility();
	void Fileall_Security();
	void add_guard(Employee);
	void add_guard();
	void add_resource();
	void add_resource(Resource);
	void add_flat(Flat);
	void add_flat();
	void add_shop(Shop);
	void add_shop();
	void add_utility(Utility);
	void add_utility();
	void view_guards();
	void view_resources();
	void view_flats();
	void view_shops();
	void view_utilities();
	void remove_guard();
	void remove_resource();
	void remove_flat();
	void remove_shop();
	void remove_utility();
	double get_security_cost();
	Shop& get_shop(int);
	Flat& get_flat(int);
	Utility& get_utility(string);
	string get_name();
	//from file maintenance
	void update_flats();
	void update_shops();

};

#endif


