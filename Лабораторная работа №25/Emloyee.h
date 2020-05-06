//Артём Чупров, лаб.25, Программы, управляемые событиями
//Базовый класс:
//ЧЕЛОВЕК(Person)
//Имя – string
//Возраст – int
//Производный класс
//СОТРУДНИК(Emloyee)
//Заработная плата – float
//Должность - string
//Группа – Дерево(Tree).
//Команды:
//Создать группу(формат команды : m количество элементов группы)
//Добавить элемент в группу(формат команды : +)
//Удалить элемент из группы(формат команды - )
//Вывести информацию об элементах группы(формат команды : s)
//Вывести информацию об имени элемента с номером k(формат команды : z k, где k – целое число)
//Конец работы(формат команды : q)
#pragma once
#include "Person.h"
class Employee :
	public Person
{
public:
	Employee(void);
public:
	~Employee(void);
	void Show();
	void Show_object();
	void Input();
	Employee(string, int, float, string);
	Employee(const Employee&);
	float Get_salary() { return salary; }
	string Get_post() { return post; }
	void Set_salary(float);
	void Set_post(string);
	Employee& operator=(const Employee&);
protected:
	float salary;
	string post;
};
