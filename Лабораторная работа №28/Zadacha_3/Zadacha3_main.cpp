//����� ������, ���.28, ���������������� ���������� ���������� STL. 
//������ 3
//������������������� ����� � ������
//������� 3
//����� ������� �������������� � �������� ��� �� �������� ������� ����������
//������� 4
//����� �������� ������� �� ��������� ��������� � ������� �� �� ����������
//������� 5
//�� ������� �������� ������� ������� �������������� ����������.
#include "List.h"
#include <D:\����\������������ ������ �28(2)\Pair.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, pos, a, b, key;
	cout << "���������� ��������� ������: ";
	cin >> n;
	List <Pair> mylist(n);
	mylist.Print();
	Pair p = mylist.srednee();
	cout << "������� ��������������: " << p << endl;
	cout << "�������:"; cin >> pos;
	mylist.add(p, pos);
	mylist.Print();
	p = mylist.srednee();
	mylist.vichest(p);
	cout << "����� ���������: " << endl;
	mylist.Print();
	cout << "�������� �� : "; cin >> a; cout << "��:"; cin >> b;
	cout << "�������� �� �������� : "; cin >> key;
	mylist.Del(n, a, b, key);
	mylist.Print();
}