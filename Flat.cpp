#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Flat.h"


using namespace std;

int Flat ::serialss = 1000;

Flat::Flat(char BLOCK , int serials, double Maintenance , double Rent , bool Is_rented )
: Block(BLOCK),  maintenance(Maintenance), gas(0.0), electricity(0.0), telephone(0.0), rent(Rent), is_rented(Is_rented), dues(0)

{
	if(serials == -1)
		Flat_num = serialss++;
	else
	Flat_num = serials;

	occupy = 1;
	dues = 0;
}

Flat::Flat(ifstream& in)
{
	char Extra;

	in >> Block >> Extra;
	in >> Flat_num >> Extra;
	in >> maintenance >> Extra;
	in >> rent >> Extra;
	in >> gas >> Extra;
	in >> electricity >> Extra;
	in >> telephone >> Extra;
	in >> dues >> Extra;
	in >> is_rented;
}

void Flat::File_Flat(ofstream& out)
{
	out << Block << ","
	<< Flat_num << ","
	<< maintenance << ","
	<< rent << ","
	<< gas << ","
	<< electricity << ","
	<< telephone << ","
	<< dues << ","
	<< is_rented << "\n";
}
void Flat::Set_Block(ifstream& in)
{
	in >> Block;
}

void Flat::Set_Flat_num(ifstream& in)
{
	in >> Flat_num;
}

void Flat::Set_maintenance(istream& in)
{
	in >> maintenance;
}

void Flat::Set_maintenance(ifstream& in)
{
	in >> maintenance;
}

void Flat::Set_gas(ifstream& in)
{
	in >> gas;
}

void Flat::Set_electricity(ifstream& in)
{
	in >> electricity;
}

void Flat::Set_telephone(ifstream& in)
{
	in >> telephone;
}

void Flat::Set_is_rented(ifstream& in)
{
	in >> is_rented;
}

void Flat::Set_rent(ifstream& in)
{
	in >> rent;
}

void Flat::Set_dues(ifstream& in)
{
	in >> dues;
}

void Flat :: set_occupy(bool a)
{
	occupy = a;
}

double Flat::get_electricity() const
{
	return (electricity);
}
double Flat::get_gas()		   const
{
	return (gas);
}
double Flat::get_telephone()   const
{
	return (telephone);
}
double Flat::get_maintenance() const
{
	return (maintenance);
}
double Flat::get_dues() const
{
	return(dues);
}

void Flat ::update_bills()
{
	srand(time(NULL));

	for(int i = 0; i < 3; i++)
	{
		double temp;
		if(i==0)
		{
			do
			{
				temp = rand()% 3000;
			}while(temp < 1000 );

			electricity = temp;
		}

		if(i==1)
		{
			do
			{
				temp = rand()% 1000;
			}while(temp < 300 );

			gas = temp;
		}

		if(i==2)
		{
			do
			{
				temp = rand()% 4000;
			}while(temp < 500 );

			telephone = temp;
		}

	}

	dues = dues + telephone + electricity + gas;
}

void Flat :: view()
{
	cout <<"Flat No.  : "<<Flat_num<<endl;
	cout <<"Block     : "<<Block<<endl;
	cout <<"Ownership : ";
	if(is_rented)
	{
			cout << " RENTED : "<<endl;
			cout << " RENT   : "<<rent<<endl;
	}
	else
		cout << " OWNED  "<<endl;
	cout << "Dues     : "<<dues<<endl;
	cout <<endl <<endl <<endl <<" +++++++++++++++++++++++++++++++++++++++ "<<endl <<endl <<endl;
}

void Flat ::clear_dues(double amt)
{
	if(amt<= dues)
		dues -= amt;
	else
		cout << "The amount is greater than the dues"<<endl;
}

char Flat :: get_block() const
{
	return Block;
}

int Flat :: get_flat_num() const
{
	return Flat_num;
}

void Flat :: set()
{
	char own;
	cout << endl << "Block                      : ";
	cin >> Block;
	/*cout << endl << "Flat Number                : ";
	cin >> Flat_num;*/
	cout << endl << "Is the house owned ? (Y/N) : ";
	cin >> own;
	if(own == 'n' || own == 'N')
	{
		cout << "What is the rent ? :";
		cin >> rent;
		is_rented = 1;
	}
	else
		is_rented = 0;
}

void Flat :: set_maintenance(double MN)
{
	maintenance =  MN;
}


