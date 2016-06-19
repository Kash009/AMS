#include "security.h"
#include <string>
#include <iostream>
#include <fstream>
#include "Employee.h"
#include "Resource.h"

using namespace std;

Security::Security()
{}

void Security::Fileall_Guard()
{
	ofstream out("Guard.csv");

	for(int i = 0; i < Guards.size(); i++)
	{
		Guards[i].File_Guard(out);
	}
}

void Security::Fileall_Resource()
{
	ofstream out("Resource.csv");

	for(int i = 0; i < Sec_Item.size(); i++)
	{
		Sec_Item[i].File_Resource(out);
	}
}

double Security :: get_all_costs()
{
	double sum = 0;
	for(int i=0 ; i< Guards.size(); i++ )
		sum += Guards[i].get_salary();
	for(int i=0 ; i< Sec_Item.size();i++)
		sum += Sec_Item[i].get_cost();

	return sum;
}

void Security ::view_guards()
{
	for(int i=0 ; i<Guards.size();i++)
		Guards[i].view();
}

void Security ::view_resources()
{
	for(int i=0 ; i<Sec_Item.size(); i++)
		Sec_Item[i].view_resource();
}

Security:: Security(vector<Employee>& G, vector<Resource>& S)
{
	Guards = G;
	Sec_Item = S;
}

void Security::Add_Guard()
{
	Guards.resize(Guards.size()+1);
	Guards[Guards.size()].add_employee();
}

void Security :: Add_Guard(Employee E)
{
	Guards.push_back(E);
}

void Security :: Add_Resource(Resource R)
{
	Sec_Item.push_back(R);
}

void Security ::display()
{
	int choice;
	cout << "Which way do you want to the security items to be listed  ?" << endl;
	cout << "1). By Guards " << endl;
	cout << "2). By Resources " << endl;
	cout << "3). All Guards & Resources" << endl;
	cin >> choice;
	string Name;
	switch (choice)
	{
	case 1:
		cout << "Enter the name of the guard you want to list the details of .. :" << endl;
		cin >> Name;
		for (int i = 0; i < Guards.size(); i++)
			if (Guards[i].get_name() == Name)
				cout << Guards[i] << "Guard" << endl;
		break;

	case 2:
		cout << "Enter the name of the Resource (Security equipment) you want the details of .. :" << endl;
		cin >> Name;
		for (int i = 0; i < Sec_Item.size();i++)
			if (Sec_Item[i].get_name() == Name)
				Sec_Item[i].view_resource();
		break;

	case 3:
		cout << "\t\t SECURITY GUARDS \n" << endl << endl;
		for (int i = 0; i < Guards.size(); i++)
			cout << Guards[i] << "Guard" << endl<<"------------------------------------------------------------------------"<<endl;

		cout << endl << endl << endl;

		for (int i = 0; i < Sec_Item.size(); i++)
			Sec_Item[i].view_resource();
		cout << endl << "-----------------------------------------------------------------------" << endl;

	default:
		break;
	}
}
void Security::Add_Resource()
{
	Sec_Item.resize(Guards.size() + 1);
		Sec_Item[Guards.size()].add_resource();

}

void Security::Dismiss_guard()
{
	string Name;

	vector <Employee> Temp;
	Temp.resize(0);
	cout << "Enter Guard Name "<<endl;
	cin >> Name;
	for (int i = 0, j=0; i < Guards.size(); i++)
	{
		if (!(Guards[i].get_name() == Name))
			Temp.push_back(Guards[i]);

	}

	Guards = Temp;
}

void Security::Discard_Resource()
{
	string Name;

	vector <Resource> Temp;
	Temp.resize(0);
	cout << "Enter Resource Name "<<endl;
	cin >> Name;
	for (int i = 0, j=0; i < Sec_Item.size(); i++)
	{
		if (!(Sec_Item[i].get_name() == Name))
			Temp.push_back(Sec_Item[i]);

	}

	Sec_Item = Temp;
}

int Security ::total_guards()
{
	return(Guards.size());
}

int Security ::total_sec_items()
{
	return (Sec_Item.size());
}
