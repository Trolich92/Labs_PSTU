//���� ������, ���.24, ������� �������.
//����� - ��������� ������ � ��������� ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� ������;
//+����� � ��������� ��������� �� ���� ��������� ������;
//������� ����� Pair(���� �����).���� ������ ���� ������������ ����� ������ : ���� int ��� ������� ����� � ���� double ��� �������.
//������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������.
#include "List.h"
#include "Pair.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Pair t;
	cin >> t;
	cout << t;
	Pair k;
	cout << "\nk?\n";
	cin >> k;
	Pair p;
	p = t + k;
	cout << p << endl;
	List<Pair>A(5, t);
	cin >> A;
	cout << "A=" << A << endl;
	List<Pair>B(10, t);
	cout << "B=" << B << endl;
	B = A;
	cout << "B=" << B << endl;
	cout << "A[2]=" << A[2] << endl;
	cout << "size=" << A() << endl;
	B = A + t;
	cout << "B=" << B << endl;
}