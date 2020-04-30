//јртЄм „упров, лаб.24, Ўаблоны классов.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//—оздать класс Pair(пара чисел).ѕара должна быть представлено двум€ пол€ми : типа int дл€ первого числа и типа double дл€ второго.
//ѕервое число при выводе на экран должно быть отделено от второго числа двоеточием.
#include "List.h"
#include "Pair.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Pair t;
	cin >> t;
	cout << t;
	Pair k;
	cout << "\nk?\n";
	cin >> k;
	Pair p;
	p = t + k;
	cout << p << endl;
	List<Pair>A(5, t);
	cin >> A;
	cout << "A=" << A << endl;
	List<Pair>B(10, t);
	cout << "B=" << B << endl;
	B = A;
	cout << "B=" << B << endl;
	cout << "A[2]=" << A[2] << endl;
	cout << "size=" << A() << endl;
	B = A + t;
	cout << "B=" << B << endl;
}