#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    int n, k, c = 1, min;
    int a[1000];
    cout << "Введите размер массива: ";
    cin >> n;
    cout << "Введите целые числа: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        
        if (a[i] < min)
        {
            min = a[i];
            k = i;
        }
        if (a[i] == min) c++;
    
    }
    cout << "Минимальный элемент: " << min << endl;
    cout << "Индекс: " << k << endl;
    cout << "Номер: " << k+1 << endl;
    if (c > 1) cout << "Количество минимальных элементов: " << c << endl;
    return 0;

}