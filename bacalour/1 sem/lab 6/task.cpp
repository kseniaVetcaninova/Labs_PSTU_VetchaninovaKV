#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    char s[256];
    char alpha[256];
    char digits[256];
    int a_idx = 0, d_idx = 0;
    cout << "Введите строку (в конце поставьте точку): " << endl;
    fgets(s, 256, stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '.'; i++)
    {
        if(isalpha((unsigned char)s[i])) alpha[a_idx++] = s[i];
        if(isdigit((unsigned char)s[i])) digits[d_idx++] = s[i];
    }
    alpha[a_idx] = '\0';
    digits[d_idx] = '\0';
    cout << "Преобразованная строка: " << alpha << digits << endl;

    return 0;    
}