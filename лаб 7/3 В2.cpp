#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int const v = 3, m = 3;
    int a[v][m],i,j,b[v*m],x=-10,c=0;
    srand(time(0));
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < v; j++)
        {
            a[i][j] = rand() % 50-25;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < v; j++)
            cout << setw(3) << a[i][j];
        cout << endl;
    }
    for (i = 0; i < m; i++)
    {
        x = 0;
        for (j = 0; j < v; j++)
           if((a[i][j]>x)&& (a[i][j]!=0)) x=a[i][j];
        if (x <= 0)b[i] = 333;
        else b[i] = x;
    }
    for (i = 0; i < m; i++)
    {
        if (b[i] == 333) cout << "В " << ++c << " строке нет положительных элементов" << endl;
        else cout << "Наибольший элемент в " << ++c << " строке:" << b[i] << endl;
    }
    return 0;
}