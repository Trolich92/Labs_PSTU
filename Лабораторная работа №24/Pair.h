//јртЄм „упров, лаб.24, Ўаблоны классов.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//—оздать класс Pair(пара чисел).ѕара должна быть представлено двум€ пол€ми : типа int дл€ первого числа и типа double дл€ второго.
//ѕервое число при выводе на экран должно быть отделено от второго числа двоеточием.
#pragma once
#include <iostream>
using namespace std;
class Pair
{
	int first;
	double second;
public:
	Pair(void) { first = 0;second = 0; };
	Pair(int f, double s) { first = f;second = s; }
	Pair(const Pair& t) { first = t.first;second = t.second; }
	Pair& operator=(const Pair&);
	Pair operator+(Pair k);
	friend ostream& operator<< (ostream& out, const Pair&);
	friend istream& operator>> (istream& in, Pair&);
	virtual ~Pair(void) {};
};