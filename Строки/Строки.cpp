//Артём Чупров, лаб.?, Строки
//Отсортировать слова в строке в лексикографическом порядке (по алфавиту).
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
char** Sort(char* s, char* s2)
{
    int n = 0, d = 0, k = 1;
    char s3[] = "                                                                                                   ";
    char result[100] = "";
    for (int i = 0;i < strlen(s);i++)
    {
        if (s[i] == ' ')
        {
            k++;
        }
    }
    char** mass = new char* [100];
    while (true)
    {
        while (*s != ' ' && *s != '\0')
        {
            n++;
            s++;
        }
        for (int i = 0; i < n;i++)
        {
            s--;
        }
        strncpy(s2, s, n);
        n = 0;
        while (*s != ' ' && *s != '\0')
        {
            s++;
        }
        d++;
        for (int i = d - 1; i < d;i++)
        {
            mass[i] = new char[100];
            mass[i] = _strdup(s2);
        }
        strcpy(s2, s3);
        if (*s == '\0')
        {
            for (int i = 0; i < k; i++)
            {
                for (int j = i + 1; j < k; j++)
                {
                    if (strcmp(mass[i], mass[j]) > 0)
                    {
                        char* temp = mass[i];
                        mass[i] = mass[j];
                        mass[j] = temp;
                    }
                }
            }
            for (int i = 0; i < d;i++)
            {
                for (int j = 0; j < strlen(mass[i]);j++)
                {
                    if (mass[i][j] != ' ')
                    {
                        cout << mass[i][j];
                    }
                }
                cout << " ";
            }
            return mass;
        }
        s++;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите строку: ";
    char s[100];
    gets_s(s);
    char s2[100] = "";
    Sort(s, s2);
}