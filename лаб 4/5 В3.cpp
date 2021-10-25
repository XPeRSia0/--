#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long long N=0,i=0,x=1,y=1,z=0;
	cout << "Введите N: ";
	cin >> N;
	if (N <= 1) return 0;
	cout << "Числа Фибоначчи меньше "<<N<<": " << "1 " << "1 ";
	while(x < N)
	{
		z = x;
		x = x + y;
		y = z ;
		if(x<N) cout<< x << " ";
	}
	return 0;
}