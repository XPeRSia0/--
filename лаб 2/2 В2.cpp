#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a,x,y;
	cout << "Введите a и x: ";
	cin >> a >> x;
	if (x <= 0) y = pow((pow(x, 2) + x + 1), 0.2); 
	if ((0 <= x) && (x <= a)) y = pow(log(abs(sqrt(x + 5))), 2);
    if (x >= a) y = sin(pow(x, 2) + pow(x, 0.25));
	cout <<"y="<<y;
	return 0;
}