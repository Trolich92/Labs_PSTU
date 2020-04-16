//Артём Чупров, лаб.18, Поиск данных с помощью хеш-таблиц
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
struct Table
{
	string* FIO;
	int passport[6];
	int phone[11];
	Table* next;
	Table* prev;
};
Table** hashs;
int coliz = 0;
Table* create_obj(string surnames[], string names[], string patronymics[])
{
	Table* p = new Table;
	for (int i = 0; i < 6; i++)
	{
		p->passport[i] = rand() % 9;
	}
	p->phone[0] = 8;
	for (int i = 1; i < 11; i++)
	{
		p->phone[i] = rand() % 9;
	}
	string FIO[6];
	int k;
	k = rand() % 10;
	FIO[0] = surnames[k];
	k = rand() % 10;
	FIO[1] = ' ';
	FIO[2] = names[k];
	k = rand() % 10;
	FIO[3] = ' ';
	FIO[4] = patronymics[k];
	p->FIO = new string[6];
	for (int i = 0; i < 6; i++)
	{
		p->FIO[i] = FIO[i];
	}
	p->next = NULL;
	p->prev = NULL;
	return p;
}
void Print(Table* p)
{
	for (int i = 0; i < 6; i++)
	{
		cout << p->passport[i];
	}
	cout << '\t';
	for (int i = 0; i < 11; i++)
	{
		cout << p->phone[i];
	}
	cout << '\t';
	for (int i = 0; i < 6; i++)
	{
		cout << p->FIO[i];
	}
	cout << endl;
}
int hash_func(string key[], int n)
{
	int h = 0;
	int k = 0;
	int* ascii = new int[key[0].length()];
	for (int i = 0; i < key[0].length(); i++)
	{
		ascii[i] = key[0][i];
		k += ascii[i];
	}
	delete[]ascii;
	ascii = new int[key[2].length()];
	for (int i = 0; i < key[2].length(); i++)
	{
		ascii[i] = key[2][i];
		k += ascii[i];
	}
	delete[]ascii;
	ascii = new int[key[4].length()];
	for (int i = 0; i < key[4].length(); i++)
	{
		ascii[i] = key[4][i];
		k += ascii[i];
	}
	delete[]ascii;
	h = -k % n;
	return h;
}
void create_table(Table* p, int n)
{
	int h = hash_func(p->FIO, n);
	cout << h << " ";
	if (hashs[h] != NULL)
	{

		hashs[h]->next = p;
		p->prev = hashs[h];
		hashs[h] = hashs[h]->next;
		Print(hashs[h]);
		coliz++;
	}
	else
	{
		hashs[h] = p;
		Print(hashs[h]);
	}
}
void search_key(string key[], int n)
{
	int h = hash_func(key, n);
	cout << h << " ";
	Table* r = hashs[h];
	if (r->prev == NULL)
	{
		Print(r);
	}
	else
	{
		do
		{
			if (r->FIO[0] == key[0] && r->FIO[2] == key[2] && r->FIO[4] == key[4])
			{
				Print(r);
				return;
			}
			else
			{
				r = r->prev;
			}
		} while (r != NULL);
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	string names[10] = { "Артём","Вячеслав","Григорий","Денис","Илья","Егор","Иван","Александр","Максим","Дмитрий" };
	string surnames[10] = { "Чупров","Быков","Афанасьев","Казаков","Мельников","Поздеев","Брагин","Рохин","Погремушкин","Иванов" };
	string patronymics[10] = { "Семёнович","Вячеславович","Григорьевич","Денисович","Ильич","Егорович","Иванович","Александрович","Максимович","Дмитриевич" };
	Table* p = NULL;
	int n;
	cout << "Введите количество элементов таблицы:";
	cin >> n;
	hashs = new Table * [n];
	for (int i = 0; i < n; i++)
	{
		hashs[i] = NULL;
	}
	for (int i = 0; i < n; i++)
	{
		p = create_obj(surnames, names, patronymics);
		create_table(p, n);
	}
	cout << "Количество коллизий:" << coliz << endl;
	cout << "Введите ФИО:";
	string search[6];
	cin >> search[0];
	cin >> search[2];
	cin >> search[4];
	search[1] = ' '; search[3] = ' ';
	search_key(search, n);
}