#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

#include "Manager.h"

Manager ::Manager(Apartment* A1)
{
	A = A1;
	total_amt = 1000000;
	dues = 0;
}

Manager::Manager()
{
		A = new Apartment;
		RES.resize(0);
		SHO.resize(0);

		total_amt = 1000000;
		dues = 0;
}

Manager ::Manager(string name, string id, string pass)
{
	Name = name;
	ID   = id;
	Password = pass;
	RES.resize(0);
	SHO.resize(0);

	dues = 0;
	total_amt = 1000000;

}

void Manager::Check()
{
	ofstream outfile;
	ifstream infile;
	string Extra;

	infile.open("ManagerData.csv");

		getline(infile, Extra, '\n');
		fflush(stdin);
		getline(infile, Name, ',');
		fflush(stdin);
		getline(infile, ID, ',');
		fflush(stdin);
		getline(infile, Password);
		fflush(stdin);

		if (Name == " " || ID == " " || Password == " ")
		{
			outfile.open("ManagerData.csv");

			outfile << "NAME,ID,PASSWORD\n";

			cout << "Enter Manager's Name \20\20\20 ";
			cin >> Name;
			outfile << Name << ",";

			cout << "Enter Manager's ID \20\20\20 ";
			cin >> ID;
			outfile << ID << ",";

			cout << "Enter a six character password \20\20\20 ";
			cin >> Password;
			outfile << Password;
			cout << "\b\b\b\b\b\b";
		}
		else
		{
			Login();
		}

}

void Manager::Login()
{
	for (int i = 0; i < 3; i++)
	{
		string ManPass;
		cout << "Enter password \20\20\20 ";
		cin >> ManPass;


		if (ManPass == Password)
		{
			cout << "Your Name is \20\20\20 " << Name << endl;
			cout << "Your ID is \20\20\20 " << ID << endl;

			cout << "ACCESS GRANTED!!!!" << endl;
			break;
		}
		else
		{
			cout << "ACCESS DENIED!!!!!" << endl;

			if (i == 2)
			{
				cout << "THE PROGRAM WILL SHUTDOWN IN ";
				cout << " 5 "; Sleep(1000);
				cout << " 4 "; Sleep(1000);
				cout << " 3 "; Sleep(1000);
				cout << " 2 "; Sleep(1000);
				cout << " 1 "; Sleep(1000);
			}
		}
	}
}

Apartment* Manager ::get_apart()
{
	return A;
}

void Manager::Fileall_Resident()
{
	ofstream out("Resident.csv");

	for(int i = 0; i < RES.size(); i++)
	{
		RES[i]->File_Resident(out);
	}
}

void Manager::Fileall_ShopOwner()
{
	ofstream out("ShopOwner.csv");

	for(int i = 0; i < SHO.size(); i++)
	{
		SHO[i]->File_ShopOwner(out);
	}
}

void Manager::add_shop_owner(ShopOwner * SO1)
{
	SHO.push_back(SO1);
}

void Manager::add_resident(Resident * R1)
{
	RES.push_back(R1);
}

void Manager::view_resident()
{
	for(int i=0 ; i<RES.size();i++)
	{
		RES[i]->view();
		cout <<endl<<RES[i]->get_name()<<endl;
	}
}

void Manager::view_shop_owner()
{
	for(int i=0 ; i<SHO.size();i++)
		SHO[i]->view();
}

void Manager::add_cash(double amt)
{
	total_amt += amt;
}

void Manager ::pay_expenses()
{
	double temp = 0;

	if(dues == 0)
	{
		temp = A->get_security_cost();
	}
	else
	{
		temp = A->get_security_cost() + dues;
	}
		if(temp <= total_amt)
			total_amt -= temp;
		else
		{
			double diff = temp - total_amt;
			total_amt = 0;
			cout << endl << "Not enough cash , some amount still due : "<<diff<<endl<<endl;
		}

}

void Manager ::remove_resident()
{
	string res;
	vector <Resident*> Temp;
	cout << "Enter the name of the resident you want to remove : "<<endl;
	getline(cin,res);
	for(int i =0 ; i< RES.size() ; i++)
		if(!(RES[i]->get_name() == res))
			Temp.push_back(RES[i]);
		else
		{
			int flt;
			flt = (RES[i]->get_flat())->get_flat_num();
			A->get_flat(flt).set_occupy(0);
		}
	RES = Temp;
}

void Manager ::remove_shop_owner()
{
	string shp;
	vector <ShopOwner*> Temp(0);
	cout << "Enter the name of the shopowner you want to remove : "<<endl;
	getline(cin,shp);
	for(int i=0 ; i<SHO.size(); i++)
		if(SHO[i]->get_name() != shp)
			Temp.push_back(SHO[i]);
		else
		{
			int shopnum;
			shopnum = SHO[i]->get_shop()->get_shop_num();
			A->get_shop(shopnum).set_occupied(0);
		}

	SHO = Temp;


}

void Manager :: update_all()
{
	add_cash(50000);
	pay_expenses();
	A->update_flats();
	A->update_shops();
}
