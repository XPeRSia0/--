#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i;
    double x=0,sum=0;
    cout << "Введите массу 12 предметов:" << endl;
    for (i = 0; i <= 12; i++)
    {
        cin >> x;
        if (x <= 0) { cout << "Ошибка"; return 0; }
        sum = sum + x;
    }
    cout<<"Общая масса 12 предметов: " << sum;
    return 0;
}