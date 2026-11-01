// Вариант 6. Задание 1
#include <iostream>

using namespace std;

int main()
{
    float af = 1000, bf = 0.0001;
    double ad = 1000, bd = 0.0001;

    //Вычисления для float с использованием промежуточных переменных
    float sumf = af + bf; // a + b
    cout << "float a + b: " << sumf << endl;
    float sqsumf = sumf * sumf; // (a + b)^2
    cout << "float (a + b)^2: " << sqsumf << endl;
    float sqaf = af * af; // a^2
    cout << "float a^2: " << sqaf << endl;
    float sqbf = bf * bf; // b^2
    cout << "float b^2: " << sqbf << endl;
    float twoabf = 2 * af * bf; // 2ab
    cout << "float 2ab: " << twoabf << endl;
    float resultf = ( sqsumf - (sqaf + twoabf) )/ sqbf;
    cout << "Float type result: " << resultf << endl;

    //Вычисления для double с использованием промежуточных переменных
    double sumd = ad + bd; // a + b
    cout << "double a + b: " << sumd << endl;
    double sqsumd = sumd * sumd; // (a + b)^2
    cout << "double (a + b)^2: " << sqsumd << endl;
    double sqad = ad * ad; // a^2
    cout << "double a^2: " << sqad << endl;
    double sqbd = bd * bd; // b^2
    cout << "double b^2: " << sqbd << endl;
    double twoabd = 2 * ad * bd; // 2ab
    cout << "double 2ab: " << twoabd << endl;
    double resultd = ( sqsumd - (sqad + twoabd) )/ sqbd;
    cout << "Double type result: " << resultd << endl;
    
    return 0;
}

/* На самом деле данное выражение упрощается до единицы (b^2/b^2).

Типы float и double имеют разную точность: Float зфнимает 4 байта, double - 8 байт.
Float не может одновременно хранить и большую целую часть, и очень маленькую мантиссу. При
сложении младшие разряды "теряются", что приводит к погрешности округления. В итоге числитель не в точности
равен b^2 и результат отклоняется от единицы.
Double обладает достаточной точностью, чтобы сохранить все разряды, поэтому результат получается
точным: равным единице

*/