#include "Resident.h"
#include <string>

Resident :: Resident() : Person()
{
serial_id = serials++;
}

Resident :: Resident(string NAME, int AGE,string ID, double SAL, Flat* F1) : Person(NAME,AGE,ID)
{
	income = SAL;
	F = F1;
	serial_id = serials++;
}

Resident::Resident(ifstream& in)
{
	char Extra;

	Person P(in);
	in >> serial_id >> Extra
	>> income >> Extra
	>> total_cash >> Extra;
	F->Set_Flat_num(in);
	in >> Extra;
	F->Set_Block(in);
}

void Resident::File_Resident(ofstream& out)
{
	File_Person(out);
	out << serial_id << ","
	<< income << ","
	<< total_cash << ","
	<< F->get_flat_num() << ","
	<< F->get_block() << "\n";
}

void Resident :: add_cash(double amt)
{
	if(amt > 0)
	total_cash += amt;
}

void Resident :: view()
{
	Person :: view();
	cout <<endl<< "Serial ID : "<<serial_id<<endl;
	cout <<endl << "Flat Owned : ";

	if(!F)
		cout << "NONE"<<endl;
	else
		cout << F->get_block() <<" "<< F->get_flat_num()<<endl;

}

void Resident:: set(Flat* F1)
{
	Person :: set();
	cout <<endl<< "Your Salary : ";
	cin >> income;
	F = F1;
}

void Resident :: pay_bills()
{
	double temp(F->get_electricity() + F->get_gas() + F->get_telephone());

	if(temp <= total_cash)
	{
		total_cash -= temp;
		F->clear_dues(temp);
	}
	else
	{
		double diff = temp - total_cash;
		total_cash = 0;
		F->clear_dues(temp - diff);
		cout << "You dont have enough money to completely pay the bills, "<<diff<<" amount still is due"<<endl;
	}

}

void Resident :: pay_maintenance ()
{
	if(F->get_maintenance() <= total_cash )
	{
		total_cash -= F->get_maintenance();

		F->clear_dues(F->get_maintenance());
	}
	else
	{
		double diff = F->get_maintenance() - total_cash;
		total_cash = 0;
		F->clear_dues(F->get_maintenance() - diff);
		cout << "You dont have enough money to completely pay the maintenance, "<<diff<<" amount still is due"<<endl;
	}
}

Flat* Resident ::get_flat()
{
	return F;
}

int Resident :: serials = 1000;
