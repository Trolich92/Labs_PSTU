//���� ������, ���.26, ��������� �������������� ��������.
//����� - ��������� ������ � ��������� ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� ������;
//+����� � ��������� ��������� �� ���� ��������� ������;
//++ - ���������� �������� � ����� ������.
//������� ���������� 1.
#include "List.h"
#include <iostream>
using namespace std;
int main()
{
	try
	{
		List x(2);
		List y;
		cout << x;
		cout << "Nomer?" << endl;
		int i;
		cin >> i;
		cout << x[i] << endl;
		cout << "size= " << x() << endl;
		x = x + 3;
		cout << x << endl;
		y = x++;
	}
	catch (int)
	{
		cout << "ERROR!!!" << endl;
	}
	return 0;
}