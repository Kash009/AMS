#include <string>
#include <iostream>
#include "Person.h"
#include "Shop.h"

using namespace std;

#ifndef SHOPOWNER_H
#define SHOPOWNER_H

class ShopOwner : public Person
{
private:
	int serial_id;
	double income;
	double total_cash;
	Shop* S;
	static int sh_serials;

public:
	ShopOwner();
	ShopOwner(string,int,string,double,Shop*);
	ShopOwner(ifstream&);
	void File_ShopOwner(ofstream&);
	void add_cash(double);
	void view();
	void set(Shop*);
	void pay_dues();
	void pay_maintenance();
	Shop* get_shop();
};

#endif
