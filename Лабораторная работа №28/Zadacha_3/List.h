//Артем Чупров, лаб.28, Последовательные контейнеры библиотеки STL. 
#pragma once
#include <iostream>
#include <list>
#include <D:\Инфа\Лабораторная работа №28(2)\Pair.h>
using namespace std;
template <class T>
class List
{
public:
	List();
	List(int n);
	~List();
	void Print();
	T srednee();
	void add(T, int);
	void vichest(T);
	void Del(int, int, int, int);
private:
	int len;
	list <T> listek;
};
template <class T>
void List<T>::vichest(T p)
{
	for (auto i = listek.begin(); i != listek.end(); ++i) *i = *i - p;
}
template <class T>
void List<T>::Del(int n, int a, int b, int key)
{
	auto i = listek.begin();
	auto j = listek.begin();
	advance(i, a);
	advance(j, b);
	int pos = -1;
	for (i; i != j; i++)
	{
		if (i->get_first() == key || i->get_second() == key)
		{
			break;
		}
	}
	if (i != j--)
	{
		listek.erase(i);
		len--;
	}
}
template <class T>
List<T>::List()
{
	len = 0;
}
template <class T>
List<T>::List(int n)
{
	T a;
	len = n;
	for (int i = 0;i < len;i++)
	{
		cin >> a;
		listek.push_back(a);
	}
}
template <class T>
List<T>::~List()
{
}
template <class T>
void List<T>::Print()
{
	for (auto i = listek.begin(); i != listek.end(); ++i)
		cout << *i << endl;
	cout << endl;
}
template <class T>
T List<T>::srednee()
{
	T s(0, 0);
	for (auto i = listek.begin(); i != listek.end(); ++i)
		s = s + *i;
	return s /= len;
}
template <class T>
void List<T>::add(T el, int pos)
{
	auto i = listek.begin();
	advance(i, pos - 1);
	listek.insert(i, el);
	len++;
}
