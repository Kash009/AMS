#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>


#include "Manager.h"
#include "Security.h"
#include "Apartment.h"
#include "Resident.h"
#include "ShopOwner.h"
#include "Employee.h"
#include "Resource.h"

using namespace std;

int A1 = 219,
	A2 = 220,
	A3 = 221,
	A4 = 222,
	A5 = 176,
	A6 = 177,
	A7 = 223;


void AMS();
void Loading();
void MainMenu();
void ManagerMenu();
void FileAll();

Apartment A("FAST Housing Scheme");
Manager M(&A);

int main()
{
	//cout << "\n\n\n\n\n\t\t\t\t\t ";
	system("color 74");
	system("mode con cols=120");
	SetConsoleTitleA("APARTMENT MANAGEMENT");

	//Loading();
	AMS();
	FileAll();

	MainMenu();


	system("pause");
}

void AMS()
{
	char a = A1,
		b = A2,
		c = A3,
		d = A5;

	cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << d << d << d << d << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << d << d << d << d << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << d << d << d << d << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << d << d << d << d << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << d << d << d << d << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << d << d << d << d << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << d << d << d << d << d << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << endl
		<< a << a << a << a << a << a << a << a << d << a << d << a << d << a << a << a << a << a << a << a << a << endl;

	cout << endl << endl;
	cout <<
		"          _    _    _    _  ___         __      ___\n"
		"	 /_\\  |_|  /_\\  |_|  |  |\\  /| |__ |\\ |  |\n"
		"	/   \\ |   /   \\ |\\   |  | \\/ | |__ | \\|  |\n"
		"                   \n"
		"				                 _          _    __   __         __      ___\n"
		"					|\\  /|  /_\\  |\\ |  /_\\  / _  |__ |\\  /| |__ |\\ |  |\n"
		"					| \\/ | /   \\ | \\| /   \\ \\__| |__ | \\/ | |__ | \\|  |\n"
		"					\n"
		"			 __	 __ ___	 __ \n"
		"			/__ \\ / /__  |  |__ |\\  /|\n"
		"			__/  |  __/  |  |__ | \\/ |\n"
		"\n"
		"\n"
		"\n";
}

void Loading()
{
	system("cls");

	AMS();
	char a;

	a = A6;

	srand(time(NULL));
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\tLoading......" << endl;

	for (int i = 0; i < 120; i++)
	{
		cout << a;
		Sleep(rand() % 100);
	}
}

void MainMenu()
{
	int choice1;
	char a;
	a = A1;
	cout << endl << endl << endl;
	cout << "\t\t\t\t\t  ________________" << endl << "\t\t\t\t\t |                |" << endl;
	cout << "\t\t\t\t\t | Selection Menu |" << endl;
	cout << "\t\t\t\t\t |________________|" << endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << "   1 \32 Manager   " << a << endl;
	cout << "\t\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << "   2 \32 Member    " << a << endl;
	cout << "\t\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << "   3 \32 Quit      " << a << endl << "\t\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\t\tEnter Choice \20\20\20 ";
	cin >> choice1;

	if (choice1 == 1)
	{
		system("cls");
		//Loading();

		system("cls");

		cout << "\t\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << endl
			 << "\t\t\t\t\t" << a << " Log In " << a << endl
			 << "\t\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << endl;

		//M.Check();
		ManagerMenu();
	}
	else if (choice1 == 2)
	{
		system("cls");
	}
	else if (choice1 == 3)
	{
		system("cls");

		cout << "\n\n\n\n\n\t\t\t\t\t\t THANKYOU!!!!" << endl;
		cout << "\n\t\t\t\t\tCP Project" << endl;
		cout << "\t\t\t\t\tTeam Members" << endl;
		cout << "\t\t\t\t\tTanweer Makhani 13K-2110" << endl;
		cout << "\t\t\t\t\tKashif Sikander 13K-2062" << endl;

		Sleep(1500);
		exit(0);
	}
}

void ManagerMenu()
{
	int ch;
	char a = A1;

	M.update_all();
	//check for password

	system("cls");

	cout << endl << endl << endl;
	cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
	cout << "\t\t\t\t | Selection Menu |" << endl;
	cout << "\t\t\t\t |________________|" << endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   1 \32 ShopOwner " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   2 \32 Flats     " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   3 \32 Shops     " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   4 \32 Utilities " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   5 \32 Residents " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   6 \32 Security  " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "                 " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << "   7 \32 Log Out   " << a << endl << "\t\t\t\t" << a << "                 " << a << endl;
	cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\tEnter Choice \20\20\20 ";

	cin >> ch;
	fflush(stdin);

	if (ch == 1)
	{
		system("cls");
		ShopOwner So;
		Shop S;
		int ChSo;

		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 View ShopOwners       " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Add ShopOwners        " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   3 \32 Remove ShopOwners     " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		cin >> ChSo;
		fflush(stdin);

		if (ChSo == 1)
		{
			M.view_shop_owner();
		}
		else if (ChSo == 2)
		{
			int SN;

			cout << "List of available shops \20\20\20" << endl;
			/*M.A->add_shop();*/
			M.A->view_shops();
			cout << "Select a Shop \20\20\20";
			cin >> SN;
			M.A->get_shop(SN).set_occupied(1);
			S = M.A->get_shop(SN);
			So.set(&S);
			M.add_shop_owner(&So);
			system("cls");
			ManagerMenu();
			//M.view_shop_owner();
		}

		else if(ChSo == 3)
		{
			M.view_shop_owner();
			M.remove_shop_owner();
		}

		/*Member M;
		M.Get_Members();*/
		Sleep(5000);
		ManagerMenu();
	}
	else if (ch == 2)
	{
		Flat F;

		system("cls");
		int Chf;

		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 List of Flats         " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Edit Flats            " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		cin >> Chf;
		fflush(stdin);

		if (Chf == 1)
		{
			M.A->view_flats();
		}
		else if(Chf == 2)
		{
			char choicee;
			cout << "Do you want to add a new flat ? (y / n)";
			cin >> choicee;
			if(choicee == 'y' || choicee == 'Y')
				M.A->add_flat();
			else
			{
				int num;
				cout << "Enter the flat number you want to edit"<<endl;
				cin >> num;
				M.A->get_flat(num).set();
			}
		}
	Sleep(5000);
	ManagerMenu();
	}
	else if (ch == 3)
	{
		Shop S;

		system("cls");
		int Chs;

		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 List of Shops         " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Edit Shop             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		cin >> Chs;
		fflush(stdin);

		if(Chs == 1)
		{
			M.A->view_shops();
		}

		else if(Chs == 2)
		{
			char choiceee;
			cout << "Do you want to add a new shop ? (y / n)"<<endl;
			cin >> choiceee;
			if(choiceee == 'y' || choiceee == 'Y')
				M.A->add_shop();
			else if(choiceee == 'n' || choiceee == 'N')
			{
				int NUM;
				cout << "Enter the serial number of the shop you want to edit"<<endl;
				cin >> NUM;
				M.A->get_shop(NUM).set();
			}

		}
	Sleep(5000);
	ManagerMenu();
	}
	else if (ch == 4)
	{
		Utility U;

		system("cls");
		int Chu;

		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 Available Utilities   " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Add Utilities         " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   3 \32 Remove Utilities      " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		cin >> Chu;
		fflush(stdin);

		if (Chu == 1)
		{
			M.A->view_utilities();
		}
		else if (Chu == 2)
		{
			M.A->add_utility();
		}
		else if (Chu == 3)
		{
			M.A->view_utilities();
			M.A->remove_utility();
		}
	Sleep(5000);
	ManagerMenu();
	}
	else if (ch == 5)
	{
		//Resident R;

		system("cls");
		int Chr;

		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 View Residents        " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Add Residents         " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "                             " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   3 \32 Remove Residents      " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		cin >> Chr;
		fflush(stdin);

		if (Chr == 1)
		{
			M.view_resident();
		}
		else if (Chr == 2)
		{
			Resident Temp;
			M.A->view_flats();
			int NUM;
			cout << "Which flat do you want to own ?";
			cin >>NUM;
			M.A->get_flat(NUM).set_occupy(1);
			Flat Tempf = M.A->get_flat(NUM);
			Temp.set(&Tempf);
			M.add_resident(&Temp);
		}
		else if (Chr == 3)
		{
			M.remove_resident();
		}
	Sleep(5000);
	ManagerMenu();
	}
	else if(ch == 6)
	{
		system("cls");
		cout << endl << endl << endl;
		cout << "\t\t\t\t  ________________" << endl << "\t\t\t\t |                |" << endl;
		cout << "\t\t\t\t | Selection Menu |" << endl;
		cout << "\t\t\t\t |________________|" << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   1 \32 Guards                   " << a << endl;
		cout << "\t\t\t\t" << a << "                                " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "						        " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << "   2 \32 Security Items           " << a << endl << "\t\t\t\t" << a << "                             " << a << endl;
		cout << "\t\t\t\t" << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\tEnter Choice \20\20\20 ";

		int Chsec;
		cin >> Chsec;
		fflush(stdin);

		if(Chsec == 1 )
		{
			int choicesec;
			cout << "which action do you want to perform ?"<<endl;
			cout <<endl << " 1).   VIEW GUARDS"<<endl<<endl;
			cout <<endl << " 2).   ADD  GUARDS"<<endl<<endl;
			cin >> choicesec;
			if(choicesec == 1)
			{
				M.A->view_guards();
			}
			else if(choicesec == 2)
			{
				M.A->add_guard();
			}
			Sleep(5000);
			ManagerMenu();
		}
		else if(Chsec == 2)
		{
			int choicesec;
			cout << "which action do you want to perform ?"<<endl;
			cout <<endl << " 1).   VIEW RESOURCES"<<endl<<endl;
			cout <<endl << " 2).   ADD  RESOURCES"<<endl<<endl;
			cin >> choicesec;
			if(choicesec == 1)
			{
				M.A->view_resources();
			}
			else if(choicesec == 2)
			{
				M.A->add_resource();
			}
		Sleep(5000);
		ManagerMenu();
		}
	Sleep(5000);
	ManagerMenu();
	}
	else if (ch == 7)
	{
		M.A->Fileall_Flats();
		M.A->Fileall_Shop();
		M.A->Fileall_Utility();
		M.A->Fileall_Security();
		M.Fileall_ShopOwner();
		M.Fileall_Resident();

		main();
	}
}

void FileAll()
{
	ifstream inFlat("Flats.csv"),
	inResident("Resident.csv"),
	inUtility("Utility.csv"),
	inShop("Shop.csv"),
	inShopOwner("ShopOwner.csv"),
	inGuard("Guard.csv"),
	inResource("Resource.csv");

	string Extra;
	getline(inFlat, Extra, '\n');

	for (int i = 0; i < 32; i++)
	{
		Flat F(inFlat);
		M.A->add_flat(F);
	}

	getline(inShop, Extra, '\n');

	for (int i = 0; i < 10; i++)
	{
		Shop S(inShop);
		M.A->add_shop(S);
	}

	getline(inUtility, Extra, '\n');

	for (int i = 0; i < 10; i++)
	{
		Utility U(inUtility);
		M.A->add_utility(U);
	}

	getline(inShopOwner, Extra, '\n');

	for (int i = 0; i < 10; i++)
	{
		ShopOwner SO(inShopOwner);
		M.add_shop_owner(&SO);
	}

	getline(inGuard, Extra, '\n');

	for (int i = 0; i < 3; i++)
	{
		Employee Guard(inGuard);
		M.A->add_guard(Guard);
	}

	getline(inResource, Extra, '\n');

	for (int i = 0; i < 10; i++)
	{
		Resource Sec_Item(inResource);
		M.A->add_resource(Sec_Item);
	}

	getline(inResident, Extra, '\n');

	for (int i = 0; i < 32; i++)
	{
		Resident R(inResident);
		M.add_resident(&R);
	}
}
