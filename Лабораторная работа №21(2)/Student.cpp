//Артём Чупров, лаб.21(2), Наследование. Виртуальные функции. Полиморфизм.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#include "Student.h"
Student::Student(void) :Person()
{
	year = 0;
}
Student::~Student(void)
{
}
Student::Student(string N, int A, int Y) :Person(N, A)
{
	year = Y;
}
Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	year = s.year;
}
void Student::Set_year(int Y)
{
	year = Y;
}
Student& Student::operator=(const Student& s)
{
	if (&s == this)return *this;
	name = s.name;
	age = s.age;
	year = s.year;
	return *this;
}
istream& operator>>(istream& in, Student& s)
{
	cout << "\nname:"; in >> s.name;
	cout << "\nage:";in >> s.age;
	cout << "\nyear:";in >> s.year;
	return in;
}
ostream& operator<<(ostream& out, const Student& s)
{
	out << "\nname : " << s.name;
	out << "\nage : " << s.age;
	out << "\nyear : " << s.year;
	out << "\n";
	return out;
}
void Student::Show()
{
	cout << "\nname : " << name;
	cout << "\nage : " << age;
	cout << "\nyear : " << year;
	cout << "\n";
}