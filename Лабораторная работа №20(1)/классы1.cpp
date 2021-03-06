﻿// Артём Чупров, лаб.20, Классы и Объекты. Инкапсуляция Конструкторы.
//Поле first – целое положительное число, продолжительность телефонного разговора в минутах,
//поле second – дробное положительное число, стоимость одной минуты разговора в рублях.
//Реализовать метод cost() – вычисление общей стоимости разговора
#include <iostream>
#include "fraction.h"
using namespace std;
void fraction::init(int F, double S)
{
	first = F;
	second = S;
}
void fraction::read()
{
	cout << "\nВремя: ";
	cin >> first;
	cout << "\nСтоимость за единицу времени: ";
	cin >> second;
}
void fraction::show()
{
	cout << "\nfirst = " << first;
	cout << "\nsecond = " << second;
	cout << endl;
}
double fraction::cost()
{
	return first * second;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	fraction A;
	A.read();
	A.show();
	A.cost();
	cout << "Стоимость разговора: " << A.cost() << endl;
}