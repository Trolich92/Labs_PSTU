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
using namespace std;
#include <iostream>
#include "Event.h"
class Object
{
public:
	Object(void);
	virtual void Show() = 0;
	virtual void Show_object() = 0;
	virtual void Input() = 0;
	virtual ~Object(void);
	virtual void HandleEvent(const TEvent& e) = 0;
};