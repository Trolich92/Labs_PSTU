#pragma once
#include <D:\Инфа\Лабораторная работа №28(2)\Pair.h>
#include <iostream>
#include <list>
#include <queue>
using namespace std;
template <class T>
class List
{
public:
	List();
	List(int n);
	List(const List<T>& Lest);
	~List();
	void Print();
	T Srednee(int n);
	void Addd(T e1, int pos, int& n);
	void Vichet(T);
	void Delete(int& n, int a, int b, int key);
private:
	int len;
	queue <T> q;
};
template<class T>
inline List<T>::~List()
{
}
template<class T>
inline void List<T>::Vichet(T p)
{
	T temp;
	int sum = p.get_second();
	list<T> l;
	while (!q.empty())
	{
		temp = q.front();
		l.push_back(temp - sum);
		q.pop();
	}
	q = copy_list_to_queue(l);
}
template<class T>
inline void List<T>::Delete(int& n, int a, int b, int key)
{
	list<T> l = copy_queue_to_list(q);
	auto i = l.begin();
	auto j = l.begin();
	advance(i, a);
	advance(j, b);
	for (i; i != j; ++i)
	{
		if (i->get_first() == key || i->get_second() == key)
		{
			break;
		}
	}
	if (i != --j)
	{
		l.erase(i);
		n--;
	}
	q = copy_list_to_queue(l);
}
template<class T>
inline T List<T>::Srednee(int n)
{
	list<T> l = copy_queue_to_list(q);
	T sum;
	while (!q.empty())
	{
		sum = sum + q.front();
		q.pop();
	}
	q = copy_list_to_queue(l);
	return sum/=n;
}
template<class T>
inline void List<T>::Addd(T e1, int pos, int& n)
{
	list<T> l;
	T p;
	int i = 1;
	while (!q.empty())
	{
		p = q.front();
		if (i == pos)
		{
			l.push_back(e1);
			n++;
		}
		l.push_back(p);
		q.pop();
		i++;
	}
	q = copy_list_to_queue(l);
}
template <class T>
list<T> copy_queue_to_list(queue<T> q)
{
	list<T> l;
	while (!q.empty())
	{
		l.push_back(q.front());
		q.pop();
	}
	return l;
}
template <class T>
queue<T> copy_list_to_queue(list<T> l)
{
	queue<T> q;
	for (auto i = l.begin(); i != l.end(); ++i) q.push(*i);
	return q;
}
template <class T>
List<T>::List()
{
	len = 0;
}
template<class T>
inline List<T>::List(int n)
{
	T p;
	len = n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		q.push(p);
	}
}
template <class T>
inline List<T>::List(const List<T>& Lest)
{
	len = Lest.len;
	list<T> l = copy_queue_to_list(Lest.q);
	q = copy_list_to_queue(l);
}
template <class T>
inline void List<T>::Print()
{
	list<T> l = copy_queue_to_list(q);
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	cout << endl;
	q = copy_list_to_queue(l);
}