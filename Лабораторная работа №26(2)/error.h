//јртЄм „упров, лаб.26, ќбработка исключительных ситуаций.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//++ - добавление элемента в конец списка.
//¬ариант реализации 3.
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Error
{
public:
	virtual void what() {};
};
class IndexError :public Error
{
protected:
	string msg;
public:
	IndexError() { msg = "Index Error\n"; }
	virtual void what() { cout << msg; }
};
class SizeError :public Error
{
protected:
	string msg;
public:
	SizeError() { msg = "size error\n"; }
	virtual void what() { cout << msg; }
};
class MaxSizeError :public SizeError
{
protected:
	string msg_;
public:
	MaxSizeError() { SizeError();msg_ = "size>MAXSIZE\n"; }
	virtual void what() { cout << msg << msg_; }
};
class IndexError1 :public IndexError
{
protected:
	string msg_;
public:
	IndexError1() { IndexError();msg_ = "index <0\n"; }
	virtual void what() { cout << msg << msg_; }
};
class IndexError2 :public IndexError
{
protected:
	string msg_;
public:
	IndexError2() { IndexError();msg_ = "index>size\n"; }
	virtual void what() { cout << msg << msg_; }
};