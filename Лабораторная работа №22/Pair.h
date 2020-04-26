//Артём Чупров, лаб.22, Перегрузка операций.
//Создать класс Pair(пара чисел).Пара должна быть представлено двумя полями : типа int для первого числа и типа double для второго.
//Первое число при выводе на экран должно быть отделено от второго числа двоеточием.
//Реализовать :
//1.операции сравнения(<, >).
//2.операция ++, которая работает следующим образом : если форма операции префиксная,
//то увеличивается первое число, если форма операции постфиксная, то увеличивается второе число.
#pragma once
#include <iostream>
using namespace std;
class Pair
{
	int first;
	double second;
public:
	Pair() { first = 0;second = 0; };
	Pair(int f, double s) { first = f;second = s; }
	Pair(const Pair& t) { first = t.first;second = t.second; }
	~Pair() {};
	int get_min() { return first; }
	double get_sec() { return second; }
	void set_min(int f) { first = f; }
	void set_sec(int s) { second = s; }
	Pair& operator=(const Pair&);
	Pair& operator++();
	Pair operator++(int);
	bool operator<(const Pair&);
	bool operator>(const Pair&);
	friend istream& operator>>(istream& in, Pair& t);
	friend ostream& operator<<(ostream& out, const Pair& t);
};
