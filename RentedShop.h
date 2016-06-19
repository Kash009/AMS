#ifndef RENTEDSHOP_H
#define RENTEDSHOP_H

#include "Shop.h"

class RentedShop :
	public Shop
{
private:
	double Rent;
	
public:
	RentedShop();
	RentedShop(char,string);
	virtual void view();
	~RentedShop();
};
#endif
