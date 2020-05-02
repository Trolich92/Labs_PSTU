//јртЄм „упров, лаб.26, ќбработка исключительных ситуаций.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//++ - добавление элемента в конец списка.
//¬ариант реализации 1.
#include "List.h"
List::List(int s)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	beg = new int[s];
	for (int i = 0;i < size;i++)
		beg[i] = 0;
}
List::List(const List& v)
{
	size = v.size;
	beg = new int[size];
	for (int i = 0;i < size;i++)
		beg[i] = v.beg[i];
}
List::~List()
{
	if (beg != 0) delete[]beg;
}
List::List(int s, int* mas)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	beg = new int[size];
	for (int i = 0;i < size;i++)
		beg[i] = mas[i];
}
const List& List::operator =(const List& v)
{
	if (this == &v)return *this;
	if (beg != 0) delete[]beg;
	size = v.size;
	beg = new int[size];
	for (int i = 0;i < size;i++)
		beg[i] = v.beg[i];
	return*this;
}
ostream& operator<<(ostream& out, const List& v)
{
	if (v.size == 0) out << "Empty\n";
	else
	{
		for (int i = 0;i < v.size;i++)
			out << v.beg[i] << " ";
		out << endl;
	}
	return out;
}
istream& operator >>(istream& in, List& v)
{
	for (int i = 0;i < v.size;i++)
	{
		cout << ">";
		in >> v.beg[i];
	}
	return in;
}
int List::operator ()()
{
	return size;
}
int List::operator [](int i)
{
	if (i < 0)throw 2;
	if (i >= size) throw 3;
	return beg[i];
}
List List::operator+(const int k)
{
	List temp(size);
	for (int i = 0;i < size;++i)
		temp.beg[i] += beg[i] + k;
	return temp;
}
List List::operator ++(int a)
{
	if (size + 1 > MAX_SIZE) throw 4;
	List temp(size + 1, beg);
	temp.beg[size] = a;
	return temp;
}