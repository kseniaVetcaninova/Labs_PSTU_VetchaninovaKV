#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    const int N = 100;
    int a[N];
    int n, k, m;
    cout << "Введите размер массива: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i] = rand() % 101-50;
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "Введите номер элемента для удаления (1-" << n << "): ";
    cin >> k;
    if (k >= 1 && k <= n)
    {
        for (int i = k - 1; i < n - 1; i++)
        {
            a[i] = a[i+1];
        }
        n--;
    }
    else 
        cout << "Номер введен некорректно" << endl;
    int p = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            p = i;
            break;
        }
    }
    if (p != -1)
    {
        m = a[p] + 2;
        for (int i = n; i > p + 1; i--)
            a[i] = a[i-1];
        a[p + 1] = m;
        n++;
    }   
    else 
        cout << "Четный элемент не найден или массив заполнен " << endl;
    cout << "Итоговый массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}
