//Вариант 6.

#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    long double e = 1e-4, sum = 0, an, n = 1, p2 = 2, p3 = 3;
    do
    {
    an = (1 / p2) + (1/p3);
    sum += an;
    p2 *= 2;
    p3 *= 3;
    n++;
    } while (an >= e);

    cout<< "Сумма ряда с точностью e = 10^4: "<< sum <<endl;
    cout<< "Количество учтенных членов ряда: "<< n - 1 << endl;
    cout<< "Последний вычисленный член ряда: " << an << endl;

    return 0;

}