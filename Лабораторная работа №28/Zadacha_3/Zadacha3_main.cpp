//Артем Чупров, лаб.28, Последовательные контейнеры библиотеки STL. 
//Задача 3
//Параметризированный класс – Список
//Задание 3
//Найти среднее арифметическое и добавить его на заданную позицию контейнера
//Задание 4
//Найти элементы ключами из заданного диапазона и удалить их из контейнера
//Задание 5
//Из каждого элемента вычесть среднее арифметическое контейнера.
#include "List.h"
#include <D:\Инфа\Лабораторная работа №28(2)\Pair.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, pos, a, b, key;
	cout << "Количество элементов списка: ";
	cin >> n;
	List <Pair> mylist(n);
	mylist.Print();
	Pair p = mylist.srednee();
	cout << "Среднее арифметическое: " << p << endl;
	cout << "Позиция:"; cin >> pos;
	mylist.add(p, pos);
	mylist.Print();
	p = mylist.srednee();
	mylist.vichest(p);
	cout << "После вычитания: " << endl;
	mylist.Print();
	cout << "Диапозон от : "; cin >> a; cout << "до:"; cin >> b;
	cout << "Значение из дапозона : "; cin >> key;
	mylist.Del(n, a, b, key);
	mylist.Print();
}