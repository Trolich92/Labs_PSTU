//���� ������, ���.27, ���������� ������ � ����� � �������������� �������
//������� ����� Pair(���� �����).���� ������ ���� ������������ ����� ������ : ���� int ��� ������� ����� � ���� double ��� �������.
//������ ����� ��� ������ �� ����� ������ ���� �������� �� ������� ����� ����������.
//����������� :
//1.�������� ���������(<, >).
//2.�������� ++, ������� �������� ��������� ������� : ���� ����� �������� ����������,
//�� ������������� ������ �����, ���� ����� �������� �����������, �� ������������� ������ �����.
//�������:
//������� ��� ������ ������� ��������� ��������.
//��������� ��� ������ � �������� ��������� �� ����� L.
//�������� K ������� ����� ������ � ������� N.
#include "Pair.h"
#include <iostream>
#include <fstream>
#include "file_work.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Pair p, p1, p2, d;
	int k, c;
	char file_name[30];
	do
	{ //����
		cout << "\n1. ������� ����";
		cout << "\n2. ���������� ����";
		cout << "\n3. ������� ��� ������ ������� ��������� ��������";
		cout << "\n4. �������� K ������� ����� ������ � ������� N";
		cout << "\n5. ��������� ��� ������ � �������� ��������� �� ����� L";
		cout << "\n0. �����\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "�������� �����: "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "���������� ������� ����";
			break;
		case 2: cout << "�������� �����: "; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "���� ����\n";
			if (k < 0)cout << "���������� ��������� ����\n";
			break;
		case 3: cout << "�������� �����: "; cin >> file_name;
			int nom;
			cout << "��������:\n"; cin >> d;
			k = del_file(file_name, d);
			if (k < 0)cout << "���������� ��������� ����";
			break;
		case 4: cout << "�������� �����: ";
			cin >> file_name;
			int q;
			cout << "N: "; cin >> nom;
			cout << "K: "; cin >> q;
			for (int i = 0; i < q; i++)
			{
				cout << "����� ���� �����:\n";
				cin >> p1;
				k = add_file(file_name, nom, p1);
				if (k < 0) cout << "���������� ��������� ����";
				if (k == 0) k = add_end(file_name, p1);
			}
			break;
		case 5: cout << "�������� �����: ";
			cin >> file_name;
			int L;
			cout << "��������:\n";
			cin >> p2;
			cout << "L: "; cin >> L;
			k = change_file(file_name, L, p2);
			if (k < 0) cout << "\n���������� ��������� ����";
			if (k == 0) cout << "\n��� ����� ������";
			break;
		}
	} while (c != 0);
}