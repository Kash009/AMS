#include<fstream>
#include<iostream>
#include<sstream>

#include "ShopOwner.h"

using namespace std;

int ShopOwner ::sh_serials = 2000;

ShopOwner :: ShopOwner() : Person()
{
	serial_id = sh_serials++;
}

ShopOwner ::ShopOwner(string NAME, int AGE,string ID, double SAL, Shop * S1) : Person(NAME,AGE,ID)
{

	income = SAL;
	S = S1;
	serial_id = sh_serials++;
}

ShopOwner::ShopOwner(ifstream& in)
{
	char Extra;
	Person P(in);
	in >> serial_id >> Extra
	>> income >> Extra
	>> total_cash >> Extra;
	S->Set_Shop_Num(in);
}

void ShopOwner::File_ShopOwner(ofstream& out)
{
	File_Person(out);
	out << serial_id << ","
	<< income << ","
	<< total_cash << ","
	<< S->get_shop_num() << "\n";
}

void ShopOwner :: add_cash(double amt)
{
	if(amt > 0)
		total_cash += amt;
}

void ShopOwner :: view()
{


	Person :: view();
	cout << endl << "Serial ID : "<< serial_id <<endl;
}

void ShopOwner :: set (Shop* S1)
{
	Person :: set();
	cout << endl << "Your monthly income : ";
	cin >> income;
	S = S1;
}

void ShopOwner ::pay_maintenance()
{
	double Temp = S->get_maintenance();
	if(Temp <= total_cash)
		total_cash -= Temp;
	else
	{
		double diff;
		diff = Temp - total_cash;
		total_cash = 0;
		cout << "Maintenance still due "<<diff <<endl;
	}
	S->clear_dues(Temp);
}

void ShopOwner ::pay_dues()
{
	double Temp = S->get_dues();
	if(Temp <= total_cash)
		total_cash -= Temp;
	else
	{
		double diff;
		diff = Temp - total_cash;
		total_cash = 0;
		cout << "Dues still remain "<<diff <<endl;
	}
	S->clear_dues(Temp);
}

Shop* ShopOwner::get_shop()
{
	return S;
}
