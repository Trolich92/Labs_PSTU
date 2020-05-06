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
Employee::Employee(void) :Person()
{
    salary = 0;
    post = "";
}
Employee::~Employee(void)
{
}
Employee::Employee(string N, int A, float S, string P) :Person(N, A)
{
    salary = S;
    post = P;
}
Employee::Employee(const Employee& E)
{
    name = E.name;
    age = E.age;
    salary = E.salary;
    post = E.post;
}
void Employee::Set_salary(float S)
{
    salary = S;
}
void Employee::Set_post(string P)
{
    post = P;
}
Employee& Employee::operator=(const Employee& e)
{
    if (&e == this)return *this;
    name = e.name;
    age = e.age;
    return *this;
}
void Employee::Show()
{
    cout << "\nname: " << name;
    cout << "\nage: " << age;
    cout << "\nsalary: " << salary;
    cout << "\npost: " << post;
    cout << "\n";
}
void Employee::Show_object()
{
    cout << "\nname: " << name;
    cout << "\nage: " << age;
    cout << "\nsalary: " << salary;
    cout << "\npost: " << post;
    cout << "\n";
}
void Employee::Input()
{
    cout << "\nname:"; cin >> name;
    cout << "\nage:";cin >> age;
    cout << "\nsalary: ";cin >> salary;
    cout << "\npost: ";cin >> post;
}
