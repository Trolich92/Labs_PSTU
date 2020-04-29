//Артём Чупров, лаб.23, АТД. Контейнеры
//Класс - контейнер СПИСОК с ключевыми значениями типа int.
//Реализовать операции :
//[] – доступа по индексу;
//() – определение размера списка;
//+число – добавляет константу ко всем элементам списка;
//++ - переход к следующему элементу(с помощью класса - итератора).
#pragma once
#include <iostream>
using namespace std;
class Iterator
{
	friend class List;//дружественный класс
public:
	Iterator() { elem = 0; }//конструктор без параметров
	Iterator(const Iterator& it) { elem = it.elem; }//конструктор копирования
	//перегруженные операции сравнения
	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; }
	//перегруженная операция инкремент
	void operator++() { ++elem; }
	//перегруженная операция декремент
	void operator--() { --elem; }
	//перегруженная операция разыменования
	int& operator *() const { return*elem; }
private:
	int* elem;//указатель на элемент типа int
};
class List
{
public:
	//конструктор с параметрами: выделяет память под s элементов и заполняет их
	//значением k
	List(int s, int k = 0);
	//конструктор с параметрами
	List(const List& a);
	//деструктор
	~List();
	//оператор присваивания
	List& operator=(const List& a);
	//операция доступа по индексу
	int& operator[](int index);
	//операция для добавление константы
	List operator+(const int k);
	//операция, возвращающая длину вектора
	int operator()();
	//перегруженные операции ввода-вывода
	friend ostream& operator<<(ostream& out, const List& a);
	friend istream& operator>>(istream& in, List& a);
	Iterator first() { return beg; }//возвращает указатель на первый элемент
	Iterator last() { return end; }//возвращает указатель на элемент следующий за последним
private:
	int size;
	int* data;
	Iterator beg;//указатель на первый элемент вектора
	Iterator end;//указатель на элемент следующий за последним
};