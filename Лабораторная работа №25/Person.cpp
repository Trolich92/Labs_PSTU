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
#include "Person.h"
#include "Event.h"
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
Person::Person(const Person& P)
{
    name = P.name;
    age = P.age;
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
void Person::Show()
{
    cout << "\nname : " << name;
    cout << "\nage : " << age;
    cout << "\n";
}
void Person::Show_object()
{
    cout << "\nname : " << name;
    cout << "\nage : " << age;
    cout << "\n";
}
void Person::Input()
{
    cout << "\nname:"; cin >> name;
    cout << "\nage:";cin >> age;
}
void Person::HandleEvent(const TEvent& e)
{
    if (e.what == evMessage)
    {
        switch (e.command)
        {
        case cmGet:cout << "name=" << Get_name() << endl;
            break;
        }
    }
}
