#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a[30], i, x=0,y=2022,razn=0,year=2021;
    srand(time(0));
    for (i = 0; i <=29; i++)
    {
        a[i] = 1902 + rand() % (year - 1902 + 1);
        cout << a[i] << ' ';
    }
    for (i = 0; i <= 29; i++)
    {
        if (a[i] > x) x = a[i];
        if (y > a[i]) y = a[i];
    }
    x = year - x;
    y = year - y;
    razn =y-x;
    cout<<endl << "На сколько лет возраст самого старого человека превышает возраст самого молодого :" << razn;
    return 0;
}