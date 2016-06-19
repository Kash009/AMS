#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <iostream>
#include "Apartment.h"


Apartment::Apartment()
{
	Sh.reserve(0);
	F.reserve(0);
	U.reserve(0);
}

void Apartment::Fileall_Flats()
{
	ofstream out("Flats.csv");

	for(int i = 0; i < F.size(); i++)
	{
		F[i].File_Flat(out);
	}
}

void Apartment::Fileall_Shop()
{
	ofstream out("Shops.csv");

	for(int i = 0; i < Sh.size(); i++)
	{
		Sh[i].File_Shop(out);
	}
}

void Apartment::Fileall_Utility()
{
	ofstream out("Utility.csv");

	for(int i = 0; i < U.size(); i++)
	{
		U[i].File_Utility(out);
	}

}

void Apartment::Fileall_Security()
{
	S.Fileall_Guard();
	S.Fileall_Resource();
}

Apartment::Apartment(string NAME)
{
	Sh.reserve(0);
	F.reserve(0);
	U.reserve(0);
	name = NAME;
}

Apartment :: Apartment(string NAME,Security SEC,vector<Flat> FLA,vector<Shop> SHO)
{
	name = NAME;
	S = SEC;
	F = FLA;
	Sh = SHO;
}

void Apartment :: add_guard()
{
	Employee Temp;
	Temp.add_employee();
	S.Add_Guard(Temp);
}

void Apartment ::add_guard(Employee E)
{
	S.Add_Guard(E);
}


void Apartment ::add_resource()
{
	Resource Temp;
	Temp.add_resource();
	S.Add_Resource(Temp);
}

void Apartment ::add_resource(Resource R)
{
	S.Add_Resource(R);
}

void Apartment ::add_flat()
{
	Flat Temp;
	Temp.set();
	F.push_back(Temp);
}

void Apartment :: add_flat(Flat F1)
{
	F.push_back(F1);
}

void Apartment :: add_shop()
{
	Shop Temp;
	Temp.set();
	Sh.push_back(Temp);
}

void Apartment :: add_shop(Shop S1)
{
	Sh.push_back(S1);
}

void Apartment ::add_utility()
{
	Utility Temp;
	Temp.Add();
	U.push_back(Temp);
}

void Apartment ::add_utility(Utility U1)
{
	U.push_back(U1);
}

void Apartment :: view_guards()
{
	S.view_guards();
}

void Apartment :: view_resources()
{
	S.view_resources();
}

void Apartment :: view_flats()
{
	if(F.size() != 0)
	{
		for(int i=0 ; i<F.size() ; i++)
			F[i].view();
	}
	else
		cout << "No Flats exist"<<endl;
}

void Apartment :: view_shops()
{
	if(Sh.size() != 0)
	for(int i=0 ; i<Sh.size();i++)
		Sh[i].view();
	else
		cout <<"No Shops exist "<<endl;
	cout << " "<<endl;
}

void Apartment :: view_utilities()
{
	if(U.size() != 0)
		for(int i=0 ; i<U.size();i++)
			U[i].Get();
	else
		cout << "No Utilities Present"<<endl;
}

void Apartment :: remove_guard()
{
	S.Dismiss_guard();
}

void Apartment :: remove_resource()
{
	S.Discard_Resource();
}

void Apartment::remove_flat()
{
	char Temp_block;
	int Temp_flat;
	cout << "Enter Block : ";
	cin >> Temp_block;
	cout << "Enter Flat number : ";
	cin >> Temp_flat;

	vector <Flat> Temp;
	Temp.resize(0);
	for(int i = 0 ; i <F.size(); i++)
	{
		if(!(( Temp_block == F[i].get_block() ) && ( Temp_flat == F[i].get_flat_num() )))
			Temp.push_back(F[i]);
	}
	F = Temp;
}

void Apartment ::remove_shop()
{
	int Shop_num;
	cout << "Enter Shop Number"<<endl;
	cin >> Shop_num;
	vector<Shop> Temp;
	Temp.resize(0);
	for(int i=0 ; i<Sh.size(); i++)
	{
		if(!(Shop_num == Sh[i].get_shop_num()))
			Temp.push_back(Sh[i]);
	}
}

void Apartment:: remove_utility()
{
	string NAME;
	cout << "Enter the name of the utility"<<endl;
	getline(cin,NAME);


	vector <Utility> Temp;
	Temp.resize(0);
	for(int i=0 ; i< U.size();i++)
		if(U[i].Get_name() != NAME)
			Temp.push_back(U[i]);

	U = Temp;
}

Shop& Apartment ::get_shop(int num)
{
	for(int i=0 ; i <Sh.size();i++)
		if(Sh[i].get_shop_num() == num)
			return Sh[i];
		else
		{
			cout << "No such record found"<<endl;
		}
}

Flat& Apartment ::get_flat(int num)
{
	for(int i=0 ; i <F.size();i++ )
		if(F[i].get_flat_num() == num)
			return F[i];
		else
		{
			cout << "No such flat found"<<endl;

		}
}

Utility& Apartment ::get_utility(string NAME)
{
	for(int i=0; i<U.size();i++)
		if(U[i].Get_name() == NAME)
			return U[i];
		else
		{
			cout << "No such utility found"<<endl;
		}
}

double Apartment ::get_security_cost()
{
	return (S.get_all_costs());
}

void Apartment ::update_flats()
{
	//read from file in here .

	for(int i=0 ; i< F.size();i++)
	{
		F[i].set_maintenance(2000);
		F[i].update_bills();
	}
}

void Apartment ::update_shops()
{
	for(int i=0 ; i< Sh.size();i++)
	{
		Sh[i].set_maintenance(2000);
		Sh[i].update_dues();
	}
}
