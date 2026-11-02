#include <iostream>
#include <clocale>

using namespace std;
int main()
{
    setlocale(LC_ALL,".65001");
    int a, b;
    bool f = true;
    cin >> a;
    if (a!=0)
    {
        cin >> b;
        f = (a < b)&&f;
        while (b!=0)
        {
            if (a >= b)
                f = false;
            a = b;
            cin >> b;
            
        }
        if (f)
            cout << "Условие выполняется" << endl;
        else 
            cout << "Условие не выполнилось" << endl;
    }
    else 
        cout << "Нет элементов" << endl;

    return 0;
}