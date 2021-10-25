#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double b,z,x,y,e;
	e = M_E;
	x = 2.87;
	y = 0.84;
    z = (2*x*y)/(x+cos(y));
	b = (sqrt(x)*sin(2*y))/(z+pow(e,z)*y);
	cout << "Результат: "<< b;
	return 0;
}