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
#include "Emloyee.h"
#include "Tree.h"
#include "Event.h"
#include "Object.h"
#include "Person.h"
#include "Dialog.h"
#include <string>
#include <iostream>
using namespace std;
Tree::~Tree(void)
{
    if (beg != nullptr) { delete[]beg; }
    beg = nullptr;
}
Tree::Tree(void)
{
    beg = nullptr;
    cur = 0;
    size = 0;
}
Tree::Tree(int n)
{
    beg = new Object * [n];
    cur = 0;
    size = n;
}
void Tree::Add()
{
    Object* p;
    cout << "1.Person" << endl;
    cout << "2.Employee" << endl;
    int y;
    cin >> y;
    if (y == 1)
    {
        Person* a = new Person;
        a->Input();
        p = a;
        if (cur < size)
        {
            beg[cur] = p;
            cur++;
        }
    }
    else
        if (y == 2)
        {
            Employee* b = new Employee;
            b->Input();
            p = b;
            if (cur < size)
            {
                beg[cur] = p;
                cur++;
            }
        }
        else return;
}
void Tree::Show()
{
    if (cur == 0) cout << "Empty" << endl;
    Object** p = beg;
    for (int i = 0;i < cur;i++)
    {
        (*p)->Show();
        p++;
    }
}
void Tree::Show_odin(int a)
{
    beg[a] -> Show_object();
}
int Tree::operator ()()
{
    return cur;
}
void Tree::Del()
{
    if (cur == 0)return;
    cur--;
}
void Tree::HandleEvent(const TEvent& e)
{
    if (e.what == evMessage)
    {
        Object** p = beg;
        for (int i = 0;i < cur;i++)
        {
            (*p)->HandleEvent(e);
            p++;
        }
    }
}
