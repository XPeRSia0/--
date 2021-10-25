#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	cout << "Введите b и a: ";
	cin >> b >> a;
	if (a == 0) cout << "Ошибка"; 
	else
	{ 
		if ((fmod(b,a))== 0) cout << "Число a является делителем числа b";
		else cout << "Число a не является делителем числа b";
	}
	return 0;
}