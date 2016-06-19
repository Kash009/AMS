#include "OwnedShop.h"



/*OwnedShop::OwnedShop(char size, string type) : Shop(size,type)
{
	if (GetSize() == 'S')
		Price = 100000;
	else if (GetSize() == 'M')
		Price = 200000;
	else if (GetSize() == 'L')
		Price = 300000;

	is_occupied(true);
}*/

void OwnedShop :: view()
{
	cout << "Ownership : OWNED"<<endl;
	this->Shop::view();
}

OwnedShop::~OwnedShop()
{
}
