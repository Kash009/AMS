#ifndef SHOP_H
#define SHOP_H

#include<iostream>
#include <string>
#include<sstream>
#include<fstream>

using namespace std;

class Shop
{
private:
	int ShopNumber;
	char Size;
	bool Purchase;
	string type;
	bool is_rented;
	double rent;
	double dues;
	double maintenance;
	static int serial_stat;

public:
	Shop();
	Shop(int, char, string, bool, double, double = 0);
	Shop(ifstream&);
	void File_Shop(ofstream&);
	void Set_Shop_Num(ifstream&);
	void set_maintenance(double);
	double get_maintenance();
	virtual void view();
	void set();
	void set_occupied(bool);
	void update_dues();
	int get_shop_num();
	bool is_occupied();
	char GetSize();
	double get_dues();
	void clear_dues(double);
};
#endif

