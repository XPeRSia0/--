#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int i, a[50], n = 0, x=0;
	srand(time(0));
	for (i = 0; i < 50; i++)
	{
		a[i] =rand() % 9999;
		cout << a[i] << ' ';
	}
	cout<<endl << "Трёхзначные элементы массива:";
	for (i = 0; i < 50;i++)
	{
		if ((a[i] > 99) && (a[i] < 1000)) cout<< a[i] << " ";
	}
	return 0;
}