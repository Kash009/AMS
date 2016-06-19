#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#ifndef UTILITY_H
#define UTILITY_H

class Utility
{
	string name_tag;
	double fees;

public:
	Utility(string = "NA", double = 0.0);
	Utility(ifstream&);
	void File_Utility(ofstream&);
	void Add();
	string Get_name();
	void Get() const;
};

#endif
