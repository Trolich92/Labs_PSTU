//Артем Чупров, лаб.28, Последовательные контейнеры библиотеки STL. 
//Задача 1
//1. Контейнер - список
//2. Тип элементов - int
//Задание 3
//Найти среднее арифметическое и добавить его на заданную позицию контейнера
//Задание 4
//Найти элементы ключами из заданного диапазона и удалить их из контейнера
//Задание 5
//Из каждого элемента вычесть среднее арифметическое контейнера.
#include <iostream>
#include <List>
#include <ctime>
using namespace std;
typedef list<int>List;
List make_List(int n)
{
	List l;
	for (int i = 0;i < n;i++)
	{
		int a = rand() % 100 - 50;
		l.push_back(a);
	}
	return l;
}
void print_List(List l)
{
	for (auto i = l.begin(); i != l.end();i++)
		cout << *i << " ";
	cout << endl;
}
List srednee(List& l, int& n)
{
	int s = 0, pos;
	for (auto i = l.begin(); i != l.end();i++)
		s += *i;
	s = s / n;
	cout << "Позиция: "; cin >> pos;
	auto i = l.begin();
	advance(i, pos - 1);
	l.insert(i, s);
	n++;
	cout << "Среднее: " << s << endl;
	return l;
}
List del(List& l, int& n, int a, int b, int key)
{
	auto i = l.begin();
	auto j = l.begin();
	advance(i, a);
	advance(j, b);
	int pos = -1;
	for (i; i != j; i++)
	{
		if (*i == key)
		{
			pos = *i;
		}
	}
	if (pos != -1)
	{
		l.remove(pos);
		n--;
	}
	return l;
}
List vichest(List& l, int n)
{
	int s = 0;
	for (auto i = l.begin(); i != l.end(); i++) s += *i;
	s = s / n;
	cout << "Среднее: " << s << endl;
	for (auto i = l.begin(); i != l.end(); i++) *i = *i - s;
	return l;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	try
	{
		List l;
		int n, a, b, key;
		cout << "Количество элементов: "; cin >> n;
		l = make_List(n);
		print_List(l);
		srednee(l, n);
		print_List(l);
		cout << "Начало диапазона: "; cin >> a;
		cout << "Конец диапазона: "; cin >> b;
		cout << "Ключ: "; cin >> key;
		del(l, n, a, b, key);
		print_List(l);
		cout << "После вычитания: " << endl;
		vichest(l, n);
		print_List(l);
	}
	catch (int)
	{
		cout << "error!";
	}
}