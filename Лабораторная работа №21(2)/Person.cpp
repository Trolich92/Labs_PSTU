//Артём Чупров, лаб.21(2), Наследование. Виртуальные функции. Полиморфизм.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#include "Person.h"
Person::Person(void)
{
	name = "";
	age = 0;
}
Person::~Person(void)
{
}
Person::Person(string N, int A)
{
	name = N;
	age = A;
}
Person::Person(const Person& Person)
{
	name = Person.name;
	age = Person.age;
}
void Person::Set_age(int A)
{
	age = A;
}
void Person::Set_name(string N)
{
	name = N;
}
Person& Person::operator=(const Person& p)
{
	if (&p == this)return *this;
	name = p.name;
	age = p.age;
	return *this;
}
istream& operator>>(istream& in, Person& p)
{
	cout << "\nname:"; in >> p.name;
	cout << "\nage:";in >> p.age;
	return in;
}
ostream& operator<<(ostream& out, const Person& p)
{
	out << "\nname : " << p.name;
	out << "\nage : " << p.age;
	out << "\n";
	return out;
}
void Person::Show()
{
	cout << "\nname : " << name;
	cout << "\nage : " << age;
	cout << "\n";
}