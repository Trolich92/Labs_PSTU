//Артём Чупров, лаб.15, Сортировка стека через stl-контейнеры
#include <iostream>
#include <ctime>
#include <stack>
using namespace std;
bool check(stack<int> input)
{
	int p = input.top();
	input.pop();
	while (!input.empty())
	{
		if (p != input.top())
			return true;
		input.pop();
	}
}
stack<int> sortStack(stack<int> input)
{
	stack<int> tmpStack;
	int p = input.top();

	while (!input.empty())
	{
		int tmp = input.top();
		input.pop();
		while (!tmpStack.empty() && tmpStack.top() < tmp)
		{
			input.push(tmpStack.top());
			tmpStack.pop();
		}
		tmpStack.push(tmp);
	}
	return tmpStack;
}
int main()
{
	srand((unsigned)NULL);
	setlocale(LC_ALL, "ru");
	stack<int> input;
	int N, p;
	cout << "Введите число элементов: ";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> p;
		input.push(p);
	}
	stack<int> tmpStack = sortStack(input);
	if (check(input))
	{
		cout << "\nОтсортированный стэк:\n";
		while (!tmpStack.empty())
		{
			cout << tmpStack.top() << " ";
			tmpStack.pop();
		}
	}
	else
		cout << "\nМассив состоит из одинаковых элементов, равных " << input.top();
}