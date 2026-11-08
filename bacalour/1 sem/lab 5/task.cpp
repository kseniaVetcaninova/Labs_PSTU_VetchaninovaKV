#include <iostream>
#include <clocale>

using namespace std;

const int N = 100;
void transp(int a[N][N], int b[N][N], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            b[j][i] = a[i][j];
    }

}
bool symmetric(int a[N][N], int b[N][N], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

int main()
{
    setlocale(LC_ALL,".65001");
    int a[N][N], b[N][N], n;
    cout << "Введите размер матрицы: ";
    cin >> n;
    cout << "Введите элементы матрицы: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    transp(a,b,n);
    cout << "Транспонированная матрица: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    if (symmetric(a,b,n))
        cout << "Матрица симметрическая";
    else
        cout << "Матрица несимметрическая";
    return 0;
}
