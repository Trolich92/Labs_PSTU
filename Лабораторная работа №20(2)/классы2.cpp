// Артём Чупров, лаб.20, Классы и Объекты. Инкапсуляция Конструкторы.
//Пользовательский класс КВИТАНЦИЯ
//Номер – int
//Дата – string
//Сумма – double
#include "Kvitanciya.h"
Kvitanciya::Kvitanciya()
{
	nomer = 0;
	data = "";
	summa = 0;
	cout << "Constructor bez parametrov dlia objecta: " << this << endl;
}
Kvitanciya::Kvitanciya(int K, string N, double S)
{
	nomer = K;
	data = N;
	summa = S;
	cout << "Constructor s parametrami dlia objecta: " << this << endl;
}
Kvitanciya::Kvitanciya(const Kvitanciya& t)
{
	data = t.data;
	nomer = t.nomer;
	summa = t.summa;
	cout << "Constructor copirovania dlia objecta: " << this << endl;
}
Kvitanciya::~Kvitanciya()
{
	cout << "Destructor dlia objecta: " << this << endl;
}
int Kvitanciya::get_nomer()
{
	return nomer;
}
string Kvitanciya::get_data()
{
	return data;
}
double Kvitanciya::get_summa()
{
	return summa;
}
void Kvitanciya::set_nomer(int K)
{
	nomer = K;
}
void Kvitanciya::set_data(string N)
{
	data = N;
}
void Kvitanciya::set_summa(double S)
{
	summa = S;
}
void Kvitanciya::show()
{
	cout << "nomer :" << nomer << endl;
	cout << "data :" << data << endl;
	cout << "summa :" << summa << endl;
}
Kvitanciya make_Kvitanciya()
{
	string s;
	int i;
	double d;
	cout << "Vvedite nomer: ";
	cin >> i;
	cout << "Vvedite datu: ";
	cin >> s;
	cout << "Vvedite summu: ";
	cin >> d;
	Kvitanciya t(i, s, d);
	return t;
}
void print_Kvitanciya(Kvitanciya t)
{
	t.show();
}
void main()
{
	Kvitanciya t1;
	t1.show();
	Kvitanciya t2(48653461, "10.09.2010", 23);
	t2.show();
	Kvitanciya t3 = t2;
	t3.set_nomer(91911991);
	t3.set_data("13.04.2020");
	t3.set_summa(100);
	print_Kvitanciya(t3);
	t1 = make_Kvitanciya();
	t1.show();
}