#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    int n, sum = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        arr[i] = rand()%100 + 1;
    cout << "Создан массив: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Сумма всех элементов: " << sum << endl;
    delete[] arr;
    return 0;
}