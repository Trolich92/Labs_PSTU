//���� ������, ���.21(2), ������������. ����������� �������. �����������.
//������� ����� :
//�������(PERSON)
//���(name) � string
//�������(age) � int
//���������� ������ ��������� �����. ������� ����������� ����� STUDENT, ������� ���� ��� ��������.
//���������� ������ ��������� � ���������� ���� ��������.
#include "Object.h"
#include "Person.h"
#include "Student.h"
#include "Vector.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	Person a;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	p->Show();
	Student b;
	cin >> b;
	cout << b << endl;
	p = &b;
	p->Show();
	Vector v(5);
	cin >> a;
	cin >> b;
	p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;

}