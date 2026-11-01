#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    double a = 0.1;
    double b = 1.0;
    int k = 10;
    int n = 25;
    double eps = 0.0001;
    double step = (b - a) / k;
    double PI = 3.14159265358979323846;
    cout << "Вычисление функции" << endl;

    double x = a;
    while (x <= b + 1e-9) 
    {
        double y = exp(x * cos(PI / 4)) * cos(x * sin(PI / 4));
        
        double sn = 1.0; 
        double fact = 1.0;
        double pow_x = 1.0;
        for (int i = 1; i <= n; ++i) 
        {
            fact *= i;
            pow_x *= x;
            double t= cos(i * PI / 4) * pow_x / fact;
            sn += t;
        }
        double se = 1.0;
        fact = 1.0;
        pow_x = 1.0;
        int i = 1;
        double t;
        do 
        {
            fact *= i;
            pow_x *= x;
            t = cos(i * PI / 4) * pow_x / fact;
            se += t;
            i++;
        } while (fabs(t) >= eps);
        
        cout << "X=" << x 
             << " SN=" << sn 
             << " SE=" << se 
             << " Y=" << y << endl;
             
        x += step;
    }
    return 0;
}
