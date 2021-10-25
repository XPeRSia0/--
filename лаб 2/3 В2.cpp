#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	cout << "Введите a и b: ";
	cin >> a >> b;
	if ((fmod(b, a))==0||(fmod(a, b))==0) cout<< "Да, одно из чисел является делителем другого";
	else cout<<"Нет, ни одно из чисел не является делителем другого";
	return 0;
}