#ifndef OWNEDSHOP_H
#define OWNEDSHOP_H

#include<iostream>
#include<sstream>
#include<fstream>

using namespace std;

#include "Shop.h"

class OwnedShop :
	public Shop
{
private:
	double Price;

public:
	OwnedShop(char,string);
	virtual void view();
	~OwnedShop();
};
#endif
