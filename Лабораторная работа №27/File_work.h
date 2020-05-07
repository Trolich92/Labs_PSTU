//Артём Чупров, лаб.27, Сохранение данных в файле с использованием потоков
//Создать класс Pair(пара чисел).Пара должна быть представлено двумя полями : типа int для первого числа и типа double для второго.
//Первое число при выводе на экран должно быть отделено от второго числа двоеточием.
//Реализовать :
//1.операции сравнения(<, >).
//2.операция ++, которая работает следующим образом : если форма операции префиксная,
//то увеличивается первое число, если форма операции постфиксная, то увеличивается второе число.
//Задание:
//Удалить все записи большие заданного значения.
//Увеличить все записи с заданным значением на число L.
//Добавить K записей после записи с номером N.
#pragma once
#include "Pair.h"
#include <iostream>
#include <fstream>
using namespace std;
int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc);
	if (!stream)return -1;
	int n;
	Pair p;
	cout << "Количество записей: "; cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> p;
		stream << p << "\n";
	}
	stream.close();
	return n;
}
int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Pair p; int i = 0;
	while (stream >> p)
	{
		cout << p << "\n";
		i++;
	}
	stream.close();
	return i;
}
int del_file(const char* f_name, Pair k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	int i = 0;Pair p;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p < k || p == k) temp << p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}
int add_file(const char* f_name, int k, Pair pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Pair p; int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == k + 1)
		{
			temp << pp;
			l++;
		}
		temp << p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}
int add_end(const char* f_name, Pair pp)
{
	fstream stream(f_name, ios::app);
	if (!stream)return -1;
	stream << pp;
	return 1;
}
int change_file(const char* f_name, int L, Pair pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Pair p, p1; int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p == pp)
		{
			p1 = p + L;
			temp << p1;
			l++;
		}
		else temp << p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}
