//јртЄм „упров, лаб.24, Ўаблоны классов.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//—оздать класс Pair(пара чисел).ѕара должна быть представлено двум€ пол€ми : типа int дл€ первого числа и типа double дл€ второго.
//ѕервое число при выводе на экран должно быть отделено от второго числа двоеточием.
#pragma once
#include <iostream>
using namespace std;
template <class T>
class List
{
public:
	List(int s, T k);
	List(const List<T>& a);
	~List();
	List& operator=(const List<T>& a);
	T& operator[](int index);
	List operator+(const T k);
	int operator()();

	friend ostream& operator<< <>(ostream& out, const List<T>& a);
	friend istream& operator>> <>(istream& in, List<T>& a);
private:
	int size;
	T* data;
};
template <class T>
List<T>::List(int s, T k)
{
	size = s;
	data = new T[size];
	for (int i = 0;i < size;i++)
		data[i] = k;
}
template <class T>
List<T>::List(const List& a)
{
	size = a.size;
	data = new T[size];
	for (int i = 0;i < size;i++)
		data[i] = a.data[i];
}
template <class T>
List<T>::~List()
{
	delete[]data;
	data = 0;
}
template <class T>
List<T>& List<T>::operator=(const List<T>& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;
	data = new T[size];
	for (int i = 0;i < size;i++)
		data[i] = a.data[i];
	return *this;
}
template <class T>
T& List<T>::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
}
template <class T>
List<T> List<T>::operator+(const T k)
{
	List<T> temp(size, k);
	for (int i = 0;i < size;++i)
		temp.data[i] = data[i] + k;
	return temp;
}
template <class T>
int List<T>::operator ()()
{
	return size;
}
template <class T>
ostream& operator<< <>(ostream& out, const List<T>& a)
{
	for (int i = 0;i < a.size;++i)
		out << a.data[i] << " ";
	return out;
}
template <class T>
istream& operator>> (istream& in, List<T>& a)
{
	for (int i = 0;i < a.size;++i)
		in >> a.data[i];
	return in;
}