//Артем Чупров, лаб.28, Последовательные контейнеры библиотеки STL.
#include "Pair.h"
#include <iostream>
using namespace std;
Pair Pair::operator/=(const int& t)
{
	Pair p;
	p.first = first / t;
	p.second = second / t;
	return p;
}
Pair& Pair::operator-(Pair t)
{
	first = first - t.first;
	second = second - t.second;
	return *this;
}
Pair& Pair::operator=(const Pair& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
Pair& Pair::operator+(const Pair& t)
{
	first = first + t.first;
	second = second + t.second;
	return *this;
}
Pair& Pair::operator-(int t)
{
	first = first - t;
	second = second - t;
	return *this;
}
int Pair::operator/(int t)
{
	t = (first + second) / t;
	return t;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "Первое число: "; in >> t.first;
	cout << "Второе число: "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}