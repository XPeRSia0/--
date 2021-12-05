#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(0));
    int const n=3,m=3;
    int a[n][m],b[n][m],c[n][m], i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 100-50;
            b[i][j] = rand() % 100-50;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (((a[i][j] >= 0) && (b[i][j] >= 0))|| ((a[i][j] <= 0) && (b[i][j] <= 0))) c[i][j] = 100;
            else  c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << "---------------" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(4) << b[i][j];
        cout << endl;
    }
    cout << "---------------" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(4) << c[i][j];
        cout << endl;
    }
    return 0;
}