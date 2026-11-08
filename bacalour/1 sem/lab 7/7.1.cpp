#include <iostream>
#include <clocale>

using namespace std;

double sub(double a, double b)
{
    return a - b;
}

void sub(double a1, double b1, double a2, double b2, double &rez1, double &rez2)
{
    rez1 = a1 - a2;
    rez2 = b1 - b2;
}

int main()
{
    setlocale(LC_ALL, ".65001");
    double a, b;
    double a1, b1, a2, b2;
    double rez1, rez2;
    cout << "Вычитание вещественных чисел" << endl;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Результат: " << sub(a, b) << endl;

    cout << "Вычитание комплексных чисел" << endl;
    cout << "Введите действительную и мнимую части первого числа: ";
    cin >> a1 >> b1;
    cout << "Введите действительную и мнимую части второго числа: ";
    cin >> a2 >> b2;
    sub(a1, b1, a2, b2, rez1, rez2);
    cout << "Результат: " << rez1;
    if (rez2 >= 0)
        cout << "+" << rez2 << "i" << endl;
    else
        cout << "-" << -rez2 << "i" << endl;

    return 0;
}