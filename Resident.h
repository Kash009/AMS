#ifndef RESIDENT_H
#define RESIDENT_H

#include <fstream>
#include <string>
#include "Person.h"
#include "Flat.h"

#include <iostream>
using namespace std;

class Resident : public Person
{
private:
	int serial_id;
	double income;
	double total_cash;
	Flat* F;
	static int serials;

public:
	Resident();
	Resident(string,int,string,double, Flat*);
	Resident(ifstream&);
	void File_Resident(ofstream&);
	void add_cash(double);
	void view();
//	void Infile_
	Flat* get_flat();
	void set(Flat*);
	void pay_bills();
	void pay_maintenance();
};

#endif
