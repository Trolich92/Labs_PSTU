//Артём Чупров, лаб.21(2), Наследование. Виртуальные функции. Полиморфизм.
//Базовый класс :
//ЧЕЛОВЕК(PERSON)
//Имя(name) – string
//Возраст(age) – int
//Определить методы изменения полей. Создать производный класс STUDENT, имеющий поле год обучения.
//Определить методы изменения и увеличения года обучения.
#include "Object.h"
#include "Person.h"
#include "Student.h"
#include "Vector.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	Person a;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	p->Show();
	Student b;
	cin >> b;
	cout << b << endl;
	p = &b;
	p->Show();
	Vector v(5);
	cin >> a;
	cin >> b;
	p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;

}
