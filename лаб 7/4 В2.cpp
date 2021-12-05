#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int const n = 4;
    int A[n][n],i,j,x=0,p=0;
    double sa = 0;
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 50-25;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(4) << A[i][j];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (A[i][j] > 0) { x += A[i][j]; p++; }
        }
    }
    sa = x / p;
    cout << "Среднее арифметическое положительных элементов, верхней треугольной матрицы, расположенной выше главной диагонали:" << sa;
    return 0;
}