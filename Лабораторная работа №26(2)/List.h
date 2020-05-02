//јртЄм „упров, лаб.26, ќбработка исключительных ситуаций.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//++ - добавление элемента в конец списка.
//¬ариант реализации 3.
#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 2;
class List
{
	int size;
	int* beg;
public:
	List() { size = 0;beg = 0; }
	List(int s);
	List(int s, int* mas);
	List(const List& v);
	~List();
	const List& operator=(const List& v);
	int operator()();
	int operator[](int i);
	List operator++(int a);
	List operator+(const int k);
	friend ostream& operator<<(ostream& out, const List& v);
	friend istream& operator>>(istream& in, List& v);
};