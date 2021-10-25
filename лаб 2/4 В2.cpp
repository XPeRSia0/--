#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a,b,x,y;
	cout << "Введите a,b,x,y: ";
	cin >> a >> b >> x >> y;
	y = abs(y);
	x = abs(x);
	if ((b>x)&&(x>a)&&(b > y)&&(y > a)) cout << "Принадлежит";
	else cout << "Не принадлежит";	
	return 0;
}