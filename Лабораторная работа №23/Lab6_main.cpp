//Артём Чупров, лаб.23, АТД. Контейнеры
//Класс - контейнер СПИСОК с ключевыми значениями типа int.
//Реализовать операции :
//[] – доступа по индексу;
//() – определение размера списка;
//+число – добавляет константу ко всем элементам списка;
//++ - переход к следующему элементу(с помощью класса - итератора).
#include "List.h"
int main()
{
	List a(5);
	cout << a << "\n";
	cin >> a;
	cout << a << "\n";
	a[2] = 100;
	cout << a << "\n";
	List b(10);
	cout << b << "\n";
	b = a;
	cout << b << "\n";
	List c(10); 
	c = b + 100;
	cout << c << "\n";
	cout << "\nthe length of a=" << a() << endl;
	cout << *(a.first()) << endl;
	Iterator i = a.first();
	++i;
	cout << *i << endl;
	for (i = a.first();i != a.last();++i)cout << *i << ' ';
}
