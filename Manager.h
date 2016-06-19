#include "Apartment.h"
#include "Resident.h"
#include "ShopOwner.h"
#include <vector>

#ifndef MANAGER_H
#define MANAGER_H

class Manager
{
private:
	vector <Resident*>  RES;
	vector <ShopOwner*> SHO;
	string Name;
	string ID;
	string Password;
	double dues;
	double total_amt;

public:
	Apartment* A;
	Manager();
	Manager(string,string,string);
	Manager(Apartment*);
	void Login();
	void Check();
	Apartment* get_apart();
	void Fileall_Resident();
	void Fileall_ShopOwner();
	void add_resident(Resident*);
	void add_shop_owner(ShopOwner*);
	void view_shop_owner();
	void view_resident();
	void add_cash(double);
	void pay_expenses();
	void remove_resident();
	void remove_shop_owner();
	void update_all();
};
#endif
