//Вариант 6. Задание 2
#include <iostream>
using namespace std;


int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    int m1 = m, n1 = n;
    cout << "1)m-++n: " << m1 - ++n1 << endl;

    int m2 = m, n2 = n;
    cout << "2)++m>--n: " << (++m2 > --n2) << endl;

    int m3 = m, n3 = n;
    cout << "3)--n<++m: " << (--n3 < ++m) << endl;

    return 0;
}