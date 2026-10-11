// Вариант 6. Задание 1
#include <iostream>

using namespace std;

int main()
{
    float af = 1000, bf = 0.0001;
    double ad = 1000, bd = 0.0001;

    //Вычисления для float с использованием промежуточных переменных
    float sumf = af + bf; // a + b
    float sqsumf = sumf * sumf; // (a + b)^2
    float sqaf = af * af; // a^2
    float sqbf = bf * bf; // b^2
    float twoabf = 2 * af * bf; // 2ab
    float resultf = ( sqsumf - (sqaf + twoabf) )/ sqbf;
    cout << "Float type result: " << resultf << endl;

    //Вычисления для double с использованием промежуточных переменных
    double sumd = ad + bd; // a + b
    double sqsumd = sumd * sumd; // (a + b)^2
    double sqad = ad * ad; // a^2
    double sqbd = bd * bd; // b^2
    double twoabd = 2 * ad * bd; // 2ab
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