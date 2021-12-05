#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUS");
    int i, n;
    double t = 0, m=0,zar=0,time=0;
    cout << "Введите количество сотрудников: ";
    cin >> n;
    double* f = new double[n];
    double* b = new double[n];
    for (i = 1; i <= n; i++)
    {
        cout << "Введите почасовую ставку " << i << " работника и количество отработанных им часов: ";
        cin >> m >> t;
        if (t <= 40) { f[i] = m; b[i] = t; }
        else { f[i] = m; b[i] = t; }
    }
    for (i = 1; i <= n; i++)
    {
        if (b[i] > 40) { zar = 40 * f[i]; time = b[i]; b[i] -= 40; zar += f[i] * b[i] * 1.5; }
        else {zar = f[i] * b[i]; time = b[i];}
        cout << "Количество отработанных часов сотрудником номер " << i << "=" << time<<".Почасавая ставка:"<<f[i] << ".Зарплата=" << zar << endl;
    }
    return 0;
}