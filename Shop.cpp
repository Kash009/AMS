#include "Shop.h"
#include <time.h>
#include <cstdlib>

int Shop :: serial_stat = 5000;

Shop::Shop()
{
	ShopNumber = serial_stat ++;
	Purchase = 0;
	maintenance = 0;
	dues = 0;
}

Shop::Shop(int srno, char S, string use, bool rented, double MN, double RN)
{
	maintenance = 0;
	ShopNumber = srno;
	Size = S;
	Purchase = 0;
	type = use;
	is_rented = rented;
	maintenance = MN;
	rent = RN;
	dues = 0;
}

Shop::Shop(ifstream& in)
{
	char Extra;

	in >> ShopNumber >> Extra;
	in >> Size >> Extra;
	in >> Purchase >> Extra;
	in >> type >> Extra;
	in >> is_rented >> Extra;
	in >> rent >> Extra;
	in >> dues >> Extra;
	in >> maintenance;
}

void Shop::File_Shop(ofstream& out)
{
	out << ShopNumber << ","
	<< Size << ","
	<< Purchase << ","
	<< type << ","
	<< is_rented << ","
	<< rent << ","
	<< dues << ","
	<< maintenance << "\n";
}

void Shop::Set_Shop_Num(ifstream& in)
{
	in >> ShopNumber;
}

double Shop::get_maintenance()
{
	return maintenance;
}


bool Shop::is_occupied()
{
	return Purchase;
}


char Shop::GetSize()
{
	return Size;
}

void Shop::set_occupied(bool P)
{
	Purchase = P;
}

void Shop :: view()
{

	/*ifstream infile("Shops.csv");

	string ShopNumber,
		Size,
		Purchase,
		Type,
		Is_rented,
		Rent,
		Dues,
		Maintenance;

	for (int i = 0; i < 11; i++)
	{
		getline(infile, ShopNumber, ',');
		fflush(stdin);

		getline(infile, Size, ',');
		fflush(stdin);

		getline(infile, Purchase, ',');
		fflush(stdin);

		getline(infile, Type, ',');
		fflush(stdin);

		getline(infile, Is_rented, ',');
		fflush(stdin);

		getline(infile, Rent, ',');
		fflush(stdin);

		getline(infile, Dues, ',');
		fflush(stdin);

		getline(infile, Maintenance, '\n');
		fflush(stdin);

		if (Purchase == "FALSE")
		{
			cout << "ShopNumber     :" << ShopNumber << endl;
			cout << "Size           :" << Size << endl;
			cout << "Purchase       :" << Purchase << endl;
			cout << "type           :" << Type << endl;
			cout << "Is Rented      :" << Is_rented << endl;
			cout << "Rent           :" << Rent << endl;
			cout << "Dues           :" << Dues << endl;
			cout << "Maintenance    :" << Maintenance << endl;
		}
		cout << endl << endl;
	}*/
	/*
	cout << "Shop Number   : "<<ShopNumber<<endl;
	cout << "Size          : "<<Size <<endl;
	cout << "Status        : ";
	if(Purchase)
		cout<<"Occupied"<<endl;
	else
		cout<<"Free"<<endl;
	if(is_rented)
	{
		cout << "OWNERSHIP : Rented"<<endl;
		cout << "Rent      : "<<rent;
	}
	else
		cout << "OWNERSHIP : Owned"<<endl;

	cout << "Purpose /Type : "<<type <<endl;*/
	string size;
	if(Size == 's' || Size == 'S')
		size = "Small";
	else if(Size == 'm' || Size == 'M')
		size = "Medium";
	else if(Size == 'l' || Size == 'L')
		size = "Large";
	else
		size = "Unknown";
	cout << "Shop Number : "<< ShopNumber<<endl;
	cout << "Shop Size   : "<< size<<endl;
	cout << "Status      : ";
	if(Purchase)
		cout << "OCCUPIED : Not available for purchase"<<endl;
	else
		cout << "FREE     : Available for purchase    "<<endl;
	cout << "Ownership       : ";
	if(is_rented)
	{
		cout << "RENTED"<<endl;
		cout << "Rent        : "<<rent<<endl;
	}
	else
		cout << "OWNED "<<endl;
	cout << "Dues            : "<< dues		  <<endl;
	cout << "Maintenance     : "<< maintenance<<endl;

}

void Shop::set_maintenance(double MN)
{
	maintenance = MN;
}

void Shop::set()
{
	cout << endl << "Enter shope size(S/M/L)      : ";
	cin >> Size;
	cin.ignore();
	cout << endl << "What purpose the shop serves : ";
	getline(cin, type);
	cout << endl << "Is the shop rented (Yes = 1 / No = 0) ";
	cin >> is_rented;
	if (is_rented)
	{
		cout << endl << "What is the rent ? : ";
		cin >> rent;
	}
	cout << endl;
}

void Shop::update_dues()
{
	double temp = 0;
	srand(time(NULL));
	do{
		temp = rand() % 7000;
	}while(temp < 3000);

	dues = dues + temp + maintenance;
}


int Shop::get_shop_num()
{
	return ShopNumber;
}

double Shop::get_dues()
{
	return (dues);
}

void Shop::clear_dues(double AMT)
{
	if (AMT <= dues)
		dues = dues - AMT;
	else
		dues = 0;
}
