#include <iostream>
#include <ctime>
#include <windows.h>
#include <intrin.h>
#pragma intrinsic(__rdtsc)
using namespace std;
unsigned __int64 tick() 
{
    return (__rdtsc());
}
void podschet(int a[], int n)
{
    int max = -100, min = 100;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int* c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; i++) 
    {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        c[a[i] - min] = c[a[i] - min] + 1;
    }
    int i = 0;
    for (int j = min; j < max + 1; j++) 
    {
        while (c[j - min] != 0)
        {
            a[i] = j;
            c[j - min]--;
            i++;
        }
    }
}
void bistr(int* a, int n)
{
    int i = 0;
    int j = n - 1;
    int mid = a[n / 2];
    do
    {
        while (a[i] < mid)
        {
            i++;
        }
        while (a[j] > mid) 
        {
            j--;
        }
        if (i <= j) 
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0) 
    {
        bistr(a, j + 1);
    }
    if (i < n) 
    {
        bistr(&a[i], n - i);
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, p;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* a = new int[n];
    do
    {
        cout << "1.Быстрая сортировка\n";
        cout << "2.Сортировка подсчетом\n";
        cout << "3.Выход\n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "Исходный массив: ";
            for (int i = 0; i < n; i++)
            {
                a[i] = rand() % 100 - 50;
                cout << a[i] << " ";
            }
            cout << endl;
            unsigned __int64 b, e;
            b = tick();
            bistr(a, n);
            e = tick();
            cout << "Отсортированный массив: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl << "Время: " << b - e - 18446744073709000000 << endl;
            break;
        }

        case 2:
        {
            cout << "Исходный массив: ";
            for (int i = 0; i < n; i++)
            {
                a[i] = rand() % 100 - 50;
                cout << a[i] << " ";
            }
            cout << endl;
            unsigned __int64 b, e;
            b = tick();
            podschet(a, n);
            e = tick();
            cout << "Отсортированный массив: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl << "Время: " << b - e - 18446744073709000000 << endl;
            break;
        }
        }
    } while (p != 3);
}