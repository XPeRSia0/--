#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n = 0, m = 0,i,a=0;
    cout << "Введите размер первого и второго массива:";
    cin >> n >> m;
    int* x = new int[n];
    int* y = new int[m];
    cout << "Введите элементы первого массива: ";
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cout << "Введите элементы второго массива: ";
    for (i = 0; i < m; i++)
    {
        cin >> y[i];
        if (x[1] == y[i])a++;
    }
    cout<<"Количество повторений второго элемента первого массива во втором: " << a;
    return 0;
}