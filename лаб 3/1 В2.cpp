#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double x = 0, sum = 0, y = 0;
	do
	{
		y = y + 5;
		x = 1 / y;
		sum = sum + x;
	} while (y  < 100); 
	cout<<"Сумма элементов последовательности=" << sum;
	return 0;
}