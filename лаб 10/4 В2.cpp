#include <iostream>
#include <iomanip>
#include <stdlib.h>
int comp1(const void* l, const void* u)
{
  return (*(int*)l - *(int*)u);
}
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n = 0, m = 0, i,j,p=0,x=1,f=0;
    cout << "Введите количество строк:";
    cin >> n;
    cout << "Введите количество столбцов:";
    cin >> m;
    int** a = new int* [n];
    int* b = new int[n * m];
    cout << "Введите элементы массива:"<<endl;
    for (i = 0; i < n; i++)
        a[i] = new int[m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin>>a[i][j];
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << setw(4) << setprecision(2) << a[i][j] << "   ";
        cout << endl;
    }
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i][j] > 0) { x *= a[i][j]; f++; }
        }
        if (f != 0) cout << "Произведение чисел " << ++p << " столбца:" << x << endl;
        else cout << "В " << ++p << " столбце нет положительных чисел" << endl;
        x = 1;
        f = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
          b[f] = a[i][j];
          f++;
        }
    }
    f = m;
    qsort(b, n*m, sizeof(int), comp1);
    cout << "Массив упорядоченный по возрастанию:" << endl<<"   ";
    for (i = 0;i < n * m;i++)
    {
      cout << b[i] << "      ";
      if (i + 1 == f) { cout << endl<<"   ";f += f; }
    }
    delete[]a;
    delete[]b;
    return 0;
}