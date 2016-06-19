#include "Utility.h"

Utility :: Utility(string name, double monthly_fee)
{
	name_tag = name;
	fees = monthly_fee;
}

Utility::Utility(ifstream& in)
{
	char Extra;

	in >> name_tag >> Extra;
	in >> fees;
}

void Utility::File_Utility(ofstream& out)
{
	out << name_tag << ","
	<< fees << "\n";
}

void Utility :: Add()
{
	cout << "Enter utility name " << endl;
	getline(cin, name_tag);
	cout << endl << "Enter the monthly / unit fees " << endl;
	cin >> fees;
}

void Utility :: Get() const
{
	cout << " Utility Name  : " << name_tag << endl;
	cout << " Utility Fees  : " << fees << endl;
}

string Utility :: Get_name()
{
	return name_tag;
}
