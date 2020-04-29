//Артём Чупров, лаб.21(2), Наследование. Виртуальные функции. Полиморфизм.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#pragma once
#include "Person.h"
class Student:public Person
{
public:
	Student(void);
public:
	~Student(void);
	void Show();
	Student(string, int, int);
	Student(const Student&);
	int Get_year() { return year; }
	void Set_year(int);
	Student& operator=(const Student&);
	friend istream& operator>>(istream& in, Student& l);
	friend ostream& operator<<(ostream& out, const Student& l);
protected:
	int year;
};