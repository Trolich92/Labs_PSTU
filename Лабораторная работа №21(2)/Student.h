//���� ������, ���.21(2), ������������. ����������� �������. �����������.
//������� ����� :
//�������(PERSON)
//���(name) � string
//�������(age) � int
//���������� ������ ��������� �����. ������� ����������� ����� STUDENT, ������� ���� ��� ��������.
//���������� ������ ��������� � ���������� ���� ��������.
#pragma once
#include "Person.h"
class Student:public Person
{
public:
	Student(void);
public:
	~Student(void);
	void Show();
	Student(string, int, int);
	Student(const Student&);
	int Get_year() { return year; }
	void Set_year(int);
	Student& operator=(const Student&);
	friend istream& operator>>(istream& in, Student& l);
	friend ostream& operator<<(ostream& out, const Student& l);
protected:
	int year;
};