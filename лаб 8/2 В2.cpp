#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	const int MAX = 100;
	int n = 0;
	char str[MAX],a;
	cout << "Введите количество символов:";
	cin >> n;
	cout << "Введите символ:";
	cin >> a;
	for (int i = 0; i <= n+1; i++)
		str[i] = a;
	str[n] = '\0';
	cout << "Cтрока, состоящая из заданного количества одинаковых символов:" << str << endl;
	return 0;
}