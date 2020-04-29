//Артём Чупров, лаб.21(2), Наследование. Виртуальные функции. Полиморфизм.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#pragma once
#include "object.h"
#include <string>
#include <iostream>
using namespace std;
class Vector
{
public:
	Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add(Object*);
	friend ostream& operator<<(ostream& out, const Vector&);
private:
	Object** beg;
	int size;
	int cur;
};
