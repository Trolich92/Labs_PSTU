//Артём Чупров, лаб.21(1), Простое наследование. Принцип подстановки.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
void f1(Person& c)
{
	c.Set_name("Dmitriy");
	cout << c;
}
Person f2()
{
	Student s("Anton", 18, 1);
	return s;
}
int main()
{
	Person a;
	cin >> a;
	cout << a;
	Person b("Artem", 19);
	cout << b;
	a = b;
	cout << a;
	Student c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
	cout << a;
}