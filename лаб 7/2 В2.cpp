#include<cmath>
#include <iomanip>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int m = 3, n = 3;
    int A[n][m], i, j;
    double sg = 0, x = 1, f = 0;
    srand(time(0));
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (((A[i][j] % 2)==0) && (A[i][j] != 0)) 
            { 
                x *= A[i][j]; f++; 
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(3) << A[i][j]; 
        cout << endl;
    }
    sg = pow(x,(1/f));
    cout<<"Среднее геометрическое четных элементов матрицы :" << sg;
    return 0;
}