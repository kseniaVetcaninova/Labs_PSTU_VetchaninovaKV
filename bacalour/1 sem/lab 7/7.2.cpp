#include <iostream>
#include <cstdarg>
#include <clocale>

using namespace std;

int min(int n, ...)
{
    va_list args;
    va_start(args, n);

    int minimum = va_arg(args, int);

    for (int i = 1; i < n; i++)
    {
        int x = va_arg(args, int);

        if (x < minimum)
        {
            minimum = x;
        }
    }

    va_end(args);

    return minimum;
}

int main()
{
    setlocale(LC_ALL, ".65001");

    cout << "Минимум из 5 чисел: "
         << min(5, 12, 7, 3, 19, 8) << endl;

    cout << "Минимум из 10 чисел: "
         << min(10, 15, 8, 23, 4, 17, 9, 31, 6, 12, 20) << endl;

    cout << "Минимум из 12 чисел: "
         << min(12, 25, 14, 7, 32, 5, 18, 11, 3, 27, 9, 16, 21) << endl;

    return 0;
}
