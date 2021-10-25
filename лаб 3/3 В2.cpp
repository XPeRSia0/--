#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double y=0, p=M_PI,h=0.2,min=0.8;
    do{
        min = min + h;
        y = pow(min, 2) - pow(cos(p * min), 2);
        cout <<"x=" << min << " "<<"y=" << y << endl;
    } while (min <= 3);
    return 0;
}