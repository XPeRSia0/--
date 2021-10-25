#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i;
    double x=1000,y=0;
    for (i = 1; i <= 10; i++)
    {
        x = (x * 0.02)+x;
        y = x - 1000;
        cout << "Прирост вклада за " <<i<<" месяц:" << y << endl;
    }
    return 0;
}