//���� ������, ���.26, ��������� �������������� ��������.
//����� - ��������� ������ � ��������� ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� ������;
//+����� � ��������� ��������� �� ���� ��������� ������;
//++ - ���������� �������� � ����� ������.
//������� ���������� 3.
#include "List.h"
#include "Error.h"
#include <iostream>
using namespace std;
List::List(int s)
{
	if (s > MAX_SIZE) throw MaxSizeError();
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
int List::operator [](int i)
{
	if (i < 0)throw IndexError1();
	if (i >= size) throw IndexError2();
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
	if (size + 1 > MAX_SIZE) throw MaxSizeError();
	List temp(size + 1, beg);
	temp.beg[size] = a;
	return temp;
}
int List::operator ()()
{
	return size;
}