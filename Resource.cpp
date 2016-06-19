#include <string>
#include <fstream>
#include <iostream>
#include "Resource.h"

using namespace std;


Resource::Resource()
{}

Resource::Resource(string NAME, double PRICE_TAG, string MANUFACTURER, string CODE, string P_DATE, string E_DATE) : name(NAME), price(PRICE_TAG),
manufacturer(MANUFACTURER), bar_code(CODE), date_of_purchase(P_DATE), date_of_expiry(E_DATE)
{}

Resource::Resource(ifstream& in)
{
	char Extra;

	in >> name >> Extra
	>> price >> Extra
	>> manufacturer >> Extra
	>> bar_code >> Extra
	>> date_of_purchase >> Extra
	>> date_of_expiry;
}

void Resource::File_Resource(ofstream& out)
{
	out << name << ","
	<< price << ","
	<< manufacturer << ","
	<< bar_code << ","
	<< date_of_purchase << ","
	<< date_of_expiry << "\n";
}

double Resource ::get_cost() const
{
	return price;
}

string Resource::get_name() const
{
	return name;
}

void Resource::view_resource()
{
	cout << endl << "Resource Name				 :"<< name;
	cout << endl << "Resource Price				 :"<< price;
	cout << endl << "Resource Manufacturer	     :"<< manufacturer;
	cout << endl << "Resource Bar Code	         :"<< bar_code;
	cout << endl << "Resource's Date Of Purchase   :"<< date_of_purchase;
	cout << endl << "Resource's Date of Expiry    :"<< date_of_expiry;
	cout << endl;

}


void Resource :: add_resource()
{
	cin.ignore();
	cout <<endl << "Enter name				: ";
	getline(cin,name);
	cout <<endl <<"Enter price				: ";
	cin >> price;
	cout <<endl <<"Enter barcode			: ";
	cin>> bar_code;
	cout << endl <<"Enter date of purchase   : ";
	cin.ignore();
	getline(cin,date_of_purchase);
	cout <<endl <<"Enter date of expiry     : ";
	getline(cin,date_of_expiry);
	cout <<endl;
}
