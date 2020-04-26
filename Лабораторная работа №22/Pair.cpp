//���� ������, ���.22, ���������� ��������.
//������� ����� Pair(���� �����).���� ������ ���� ������������ ����� ������ : ���� int ��� ������� ����� � ���� double ��� �������.
//������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������.
//����������� :
//1.�������� ���������(<, >).
//2.�������� ++, ������� �������� ��������� ������� : ���� ����� �������� ����������,
//�� ������������� ������ �����, ���� ����� �������� �����������, �� ������������� ������ �����.
#include "Pair.h"
#include <iostream>
using namespace std;
Pair& Pair::operator=(const Pair& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
bool Pair::operator<(const Pair& t)
{
	bool result = false;
	if (this->first < t.first && this->second < t.second)
	{
		result = true;
	}
	if (this->first == t.first && this->second < t.second)
	{
		result = true;
	}
	if (this->first < t.first && this->second == t.second)
	{
		result = true;
	}
	return result;
}
bool Pair::operator>(const Pair& t)
{
	bool result = false;
	if (this->first > t.first && this->second > t.second)
	{
		result = true;
	}
	if (this->first == t.first && this->second > t.second)
	{
		result = true;
	}
	if (this->first > t.first && this->second == t.second)
	{
		result = true;
	}
	return result;
}
Pair& Pair::operator++()
{
	++first;
	return *this;
}
Pair Pair::operator ++(int)
{
	second++;
	return *this;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "������ �����: "; in >> t.first;
	cout << "������ �����: "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}