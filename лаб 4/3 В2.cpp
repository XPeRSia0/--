#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double x,y=0;
    cout << "Значения функции y во всех точках интервала x [-8;10] с шагом h = 0.3:" << endl;
    for (x = -8; x <= 10; x = x + 0.3)
    {
        if (x <= 1) y = pow(x,5)-1;
        if ((x > 1) && (x <= 3)) y = x * (pow(x, 2) + pow(2, x));
        if (x > 3) y = tan(x);
        cout<<"x="<<x<<" "<<"y=" << y << endl;
    }
    return 0;
}