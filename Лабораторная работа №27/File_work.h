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
#include "file_work.h"
using namespace std;
int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc);//открыть для записи
	if (!stream)return -1;//ошибка открытия файла
	int n;
	Pair p;
	cout << "Количество записей: "; cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> p;//ввод атрибутов объекта из стандартного потока
		stream << p << "\n";//запись объекта в файловый поток
	}
	stream.close();//закрыть поток
	return n;//вернуть количество записанных объектов
}
int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
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
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	int i = 0;Pair p;
	while (stream >> p)//пока нет конца файла выполняем чтение объекта
	{
		//если прочитан признак конца файла,то выход из цикла
		if (stream.eof())break;
		i++;
		//если объект меньше k, то записываем его во вспомогательый файл
		if (p < k || p == k) temp << p;
	}
	//закрыть файлы
	stream.close(); temp.close();
	remove(f_name);//удалить старый файл
	rename("temp", f_name);// переименовать temp
	return i;//количество прочитанных
}
int add_file(const char* f_name, int k, Pair pp)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	Pair p; int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == k + 1)
		{
			temp << pp;//записать в temp новую запись
			l++;
		}
		temp << p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;//количество добавленных
}
int add_end(const char* f_name, Pair pp)
{
	fstream stream(f_name, ios::app);//открыть для добавления
	if (!stream)return -1;//ошибка открытия файла
	stream << pp; //записать новую запись
	return 1;
}
int change_file(const char* f_name, int L, Pair pp)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_name, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
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
	return l;//количество измененных элементов
}