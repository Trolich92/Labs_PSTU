//јртЄм „упров, лаб.26, ќбработка исключительных ситуаций.
// ласс - контейнер —ѕ»—ќ  с ключевыми значени€ми типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера списка;
//+число Ц добавл€ет константу ко всем элементам списка;
//++ - добавление элемента в конец списка.
//¬ариант реализации 3.
#include "List.h"
#include "Error.h"
#include <iostream>
using namespace std;
int main()
{
	try
	{
		List x(2);
		List y;
		cout << x;
		cout << "Nomer?" << endl;
		int i;
		cin >> i;
		cout << x[i] << endl;
		cout << "size= " << x() << endl;
		x = x + 3;
		cout << x << endl;
		y = x++;
	}
	catch (Error& e)
	{
		e.what();
	}
	return 0;
}