#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    const int m = 12, n = 10;
    int a[n][m],i,j,x=1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = x++;
        }
    }
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++) cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}