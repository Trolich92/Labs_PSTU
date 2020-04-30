//јртЄм „упров, лаб.24, Ўаблоны классов.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//—оздать класс Pair(пара чисел).ѕара должна быть представлено двум€ пол€ми : типа int дл€ первого числа и типа double дл€ второго.
//ѕервое число при выводе на экран должно быть отделено от второго числа двоеточием.
#include "Pair.h"
Pair& Pair::operator =(const Pair& t)
{
	first = t.first;
	second = t.second;
	return*this;
}
Pair Pair::operator+(Pair k)
{
	int f = first + k.first;
	double s = second + k.second;
	Pair temp(f, s);
	return temp;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "ѕервое число: "; in >> t.first;
	cout << "¬торое число: "; in >> t.second;
	return in;
}