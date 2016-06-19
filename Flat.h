#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

#ifndef FLAT_H
#define FLAT_H

class Flat
{
private:
	char Block;
	int Flat_num;
	double maintenance;
	double gas;
	double electricity;
	double telephone;
	bool occupy;
	bool is_rented;
	double rent;
	double dues;
	static int serialss;

public:
	Flat(char = 'a', int = -1, double = 0.0 , double = 0.0, bool = 0);
	Flat(ifstream&);
	void File_Flat(ofstream&);
	void Set_Block(ifstream&);
	void Set_Flat_num(ifstream&);
	void Set_maintenance(ifstream&);
	void Set_maintenance(istream& in);
	void Set_gas(ifstream&);
	void Set_electricity(ifstream&);
	void Set_telephone(ifstream&);
	void Set_is_rented(ifstream&);
	void Set_rent(ifstream&);
	void Set_dues(ifstream&);
	void set();
	void set_occupy(bool);
	void view();
	char get_block() const;
	void set_maintenance(double);
	int get_flat_num() const;
	double get_electricity() const;
	double get_gas()		 const;
	double get_telephone()   const;
	double get_maintenance() const;
	double get_dues()		 const;
	void update_bills();
	void clear_dues(double);
};
#endif
