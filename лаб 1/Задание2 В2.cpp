#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, x;
    cout << "Введите двухзначное число: " ;
	cin >> a;
	x = a / 10 + (a % 10) * 10;
	cout << "Число полученное при перестановки цифр: " << x;
	return 0;
}