//Артём Чупров, лаб.23, АТД. Контейнеры
//Класс - контейнер СПИСОК с ключевыми значениями типа int.
//Реализовать операции :
//[] – доступа по индексу;
//() – определение размера списка;
//+число – добавляет константу ко всем элементам списка;
//++ - переход к следующему элементу(с помощью класса - итератора).
#include "List.h"
List::List(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0;i < size;i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}
//конструктор копирования
List::List(const List& a)
{
	size = a.size;
	data = new int[size];
	for (int i = 0;i < size;i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
}
//деструктор
List::~List()
{
	delete[]data;
	data = 0;
}
//операция присваивания
List& List::operator=(const List& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0;i < size;i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
	return *this;
}
//операция доступа по индексу
int& List::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
}
//операция для добавления константы
List List::operator+(const int k)//+k
{
	List temp(size);
	for (int i = 0;i < size;++i)
		temp.data[i] += data[i] + k;
	return temp;
}
//операция для получения длины вектора
int List::operator ()()
{
	return size;
}
//операции для ввода-выода
ostream& operator<<(ostream& out, const List& a)
{
	for (int i = 0;i < a.size;++i)
		out << a.data[i] << " ";
	return out;
}
istream& operator>>(istream& in, List& a)
{
	for (int i = 0;i < a.size;++i)
		in >> a.data[i];
	return in;
}