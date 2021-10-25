#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int x=0,y=0,t=1,r=0,f=0;
    cout << "Введите последовательность чисел от меньшего к большему:" << endl;
    do {
        cin >> x;
        if (x < 0) r = x;
        y = y++;
        if ((fmod(y, 2) == 0) && (x != 0)) t = x * t;
    } while (x!=0);
    f = t - r;
    cout <<"Разность между произведением нечетных чисел и наибольшим среди отрицательных чисел:"<<f;
    return 0;

}