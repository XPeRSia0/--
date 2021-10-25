#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int b, min = -5,sum=0,i;
	cout << "Введите b: " ;
	cin >> b;
	if (b < min) cout << "Ошибка";
	for (i = 0; i < b; i++)
	{
		sum =sum+min++;
	}
	cout <<"Сумма всех целых чисел от -5 до b: " << sum;
	return 0;
}
