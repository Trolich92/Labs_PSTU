//���� ������, ���.21(1), ������� ������������. ������� �����������.
//������� ����� :
//�������(PERSON)
//���(name) � string
//�������(age) � int
//���������� ������ ��������� �����. ������� ����������� ����� STUDENT, ������� ���� ��� ��������.
//���������� ������ ��������� � ���������� ���� ��������.
#include "Student.h"
Student::Student(void) :Person()
{
	year = 0;
}
Student::~Student(void)
{
}
Student::Student(string N, int A, int Y) :Person(N, A)
{
	year = Y;
}
Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	year = s.year;
}
void Student::Set_year(int Y)
{
	year = Y;
}
Student& Student::operator=(const Student& s)
{
	if (&s == this)return *this;
	name = s.name;
	age = s.age;
	year = s.year;
	return *this;
}
istream& operator>>(istream& in, Student& s)
{
	cout << "\nname:"; in >> l.name;
	cout << "\nage:";in >> s.age;
	cout << "\nyear:";in >> s.year;
	return in;
}
ostream& operator<<(ostream& out, const Student& s)
{
	out << "\nname : " << s.name;
	out << "\nage : " << s.age;
	out << "\nyear : " << s.year;
	out << "\n";
	return out;
}