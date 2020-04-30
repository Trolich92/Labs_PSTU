//���� ������, ���.24, ������� �������.
//����� - ��������� ������ � ��������� ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� ������;
//+����� � ��������� ��������� �� ���� ��������� ������;
//������� ����� Pair(���� �����).���� ������ ���� ������������ ����� ������ : ���� int ��� ������� ����� � ���� double ��� �������.
//������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������.
#include "Pair.h"
Pair& Pair::operator =(const Pair& t)
{
	first = t.first;
	second = t.second;
	return*this;
}
Pair Pair::operator+(Pair k)
{
	int f = first + k.first;
	double s = second + k.second;
	Pair temp(f, s);
	return temp;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "������ �����: "; in >> t.first;
	cout << "������ �����: "; in >> t.second;
	return in;
}