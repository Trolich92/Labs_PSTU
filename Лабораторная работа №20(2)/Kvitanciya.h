#pragma once
#include <iostream>
#include <string>
using namespace std;
class Kvitanciya
{
	string data;
	int nomer;
	double summa;
public:
	Kvitanciya();
	Kvitanciya(int, string, double);
	Kvitanciya(const Kvitanciya&);
	~Kvitanciya();
	int get_nomer();
	void set_nomer(int);
	string get_data();
	void set_data(string);
	double get_summa();
	void set_summa(double);
	void show();
};
