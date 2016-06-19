#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>

using namespace std;

#include "Member.h"

Member::Member()
{
}

void Member::Add_Members()
{
	string Name;
	string ID;
	string MemberPassword, MemPass, Extra;

	ofstream outfile;
	ifstream infile;

	string temp;
	string temp1;

	infile.open("MembersData.csv");

	getline(infile, Extra, '\n');
	
	getline(infile, Name, ',');
	fflush(stdin);

	getline(infile, ID, ',');
	fflush(stdin);

	getline(infile, MemberPassword);
	fflush(stdin);

	if (Name == "" || ID == "" || MemberPassword == "")
	{
		outfile.open("MembersData.csv");

		outfile << "NAME,ID,PASSWORD\n";

		cout << "Enter Member's Name \20\20\20 ";
		cin >> Name;
		outfile << Name << ",";

		cout << "Enter Member's ID \20\20\20 ";
		cin >> ID;
		outfile << ID << ",";

		cout << "Enter a password \20\20\20 ";
		cin >> MemberPassword;
		outfile << MemberPassword << "\n";
		cout << "\b\b\b\b\b\b";
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{

			cout << "NAME \20\20\20 ";
			cin >> temp1;

			cout << "ID \20\20\20 ";
			cin >> temp;

			cout << "Enter password \20\20\20 ";
			cin >> MemPass;

			if ((MemPass == MemberPassword) && (Name == temp1) && (temp == ID))
			{
				cout << endl;
				cout << "Your Name is \20\20\20 " << Name << endl;
				cout << "Your ID is \20\20\20 " << ID << endl;
				cout << endl << "ACCESS GRANTED!!!!" << endl;
				break;
			}
			else
			{
				cout << "ACCESS DENIED!!!!!" << endl;
				cout << "TRY AGAIN!!!!!!!!!!" << endl;
			}
		}
	}
}

void Member::Get_Members()
{
	string Name;
	string ID;
	string MemberPassword, MemPass, Extra;

	ofstream outfile;
	ifstream infile;

	string temp;
	string temp1;

	infile.open("MembersData.csv");

	//getline(infile, Extra, '\n');
	//cout << endl;

	for (int i = 0; i < 5; i++)
	{
		char b = 221;
		getline(infile, Name, ',');
		cout << b << setw(9) << Name;

		getline(infile, ID, ',');
		cout << b << setw(9) << ID << b;

		getline(infile, MemberPassword);
		cout << endl;
	}


}