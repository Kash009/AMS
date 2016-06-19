#include "RentedShop.h"

RentedShop :: RentedShop() : Shop()
{}

/*
RentedShop::RentedShop(char size, string type) : Shop(size,type)
{
	if (GetSize() == 'S')
		Rent = 1000;
	else if (GetSize() == 'M')
		Rent = 2000;
	else if (GetSize() == 'L')
		Rent = 3000;

	is_occupied(true);
}*/


RentedShop::~RentedShop()
{
}

void RentedShop :: view()
{
	cout << "Ownership : RENTED"<<endl;
	this->Shop::view();
}
