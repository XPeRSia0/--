#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    int a[19], i, n = 0, b[19], k[19] = {},p=0;
    srand(time(0));
    for (i = 0; i <= 19; i++)
    {
        a[i] = rand() % 10;
        b[i] = rand() % 10;
    }
    if ((a[0] + b[0]) > 9)cout << setw(2);
    for (i = 0; i <= 19;i++)
    {
        cout << a[i];
    }
    cout << endl;
    if ((a[0] + b[0]) > 9)cout << setw(2);
    for (i = 0; i <= 19; i++)
    {
        cout << b[i];
    }
    cout << endl;
    for (i = 19; i >= 0; i--)
    {
        if (i == 19) 
        {
            k[i] = (a[i] + b[i]) % 10; continue;
        }
        k[i] = (a[i] + b[i]) % 10; if ((a[i + 1] + b[i + 1]) > 9) k[i] += 1;
        if (p == 1) 
        {
            k[i] += 1; p = 0;
        }
        if (k[i] == 10) { k[i] = 0; p = 1; }
    }
    if ((a[0] + b[0]) > 9) cout << 1;
    for (i = 0; i <= 19; i++)
    {
        cout << k[i];
    }
return 0;
}