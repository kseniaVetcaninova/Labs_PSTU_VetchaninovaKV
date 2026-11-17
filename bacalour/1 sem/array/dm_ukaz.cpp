#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* arr = new int[n];
    int* ptr = arr;
    cout << "Введите элементы массива: " << endl;
    for(int i = 0; i < n; i++)
        cin >> *(ptr + i);
    ptr = arr;
    while(ptr < arr + n)
    {
        if (*ptr%2 == 0)
        {
            if (ptr == arr)
                *ptr = 0;
            else if (ptr == arr + n - 1)
                *ptr = 0;
            else
                *ptr = *(ptr - 1) + *(ptr + 1);
        }
        ++ptr;
    }
    cout << "Изменённый массив: ";
    for(ptr = arr; ptr < arr + n; ptr++)
        cout << *ptr << " ";
    cout << endl;
    delete[] arr;
    return 0;
}