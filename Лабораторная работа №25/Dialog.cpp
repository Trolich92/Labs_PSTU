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
#include "Dialog.h"
#include "Event.h"
#include <string>
#include <iostream>
using namespace std;
Dialog::Dialog(void) :Tree()
{
    EndState = 0;
}
Dialog::~Dialog(void)
{
}
void Dialog::GetEvent(TEvent& event)
{
    string OpInt = "+-skqzm"; 
    string s;
    string param;
    char code;
    cout << '>';
    cin >> s; code = s[0];
    if (OpInt.find(code) >= 0)
    {
        event.what = evMessage;
        switch (code)
        {
        case 'm':event.command = cmMake;break;
        case '/': event.command = cmGet;break;
        case '+': event.command = cmAdd;break;
        case '-': event.command = cmDel;break;
        case 's': event.command = cmShow;break;
        case 'z': event.command = cmShow_odin;break;
        case'q': event.command = cmQuit;break;
        }
        if (s.length() > 1)
        {
            param = s.substr(1, s.length() - 1);
            int A = atoi(param.c_str());
            event.a = A;
        }
    }
    else event.what = evNothing;
}
int Dialog::Execute()
{
    TEvent event;
    do {
        EndState = 0;
        GetEvent(event);
        HandleEvent(event);
    } while (!Valid());
    return EndState;
}
int Dialog::Valid()
{
    if (EndState == 0) return 0;
    else return 1;
}
void Dialog::ClearEvent(TEvent& event)
{
    event.what = evNothing;
}
void Dialog::EndExec()
{
    EndState = 101;
}
void Dialog::HandleEvent(TEvent& event)
{
    if (event.what == evMessage)
    {
        switch (event.command)
        {
        case cmMake:
            size = event.a;
            beg = new Object * [size];
            cur = 0;
            ClearEvent(event);
            break;
        case cmAdd:
            Add();
            ClearEvent(event);
            break;
        case cmDel:
            Del();
            ClearEvent(event);
            break;
        case cmShow:
            Show();
            ClearEvent(event);
            break;
        case cmShow_odin:
            Show_odin(event.a);
            ClearEvent(event);
            break;
        case cmQuit:
            EndExec();
            ClearEvent(event);
            break;
        default:
            Tree::HandleEvent(event);
        };
    };
}
