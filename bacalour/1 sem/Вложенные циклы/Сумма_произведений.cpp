#include <iostream>

using namespace std;
int main()
{
    int n, i, j; 
    long long s = 0, c = 1;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j <= 2*i; j++)
            c*=j;
        s+=c;
        c = 1;
    }
    cout << s;
    return 0;
}