#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int b=0,p=1,i,count=0;
	string a = "aaaabbbsaaaaassaaa";
	cout << a << endl;
	for (i = 0; i != a.length(); i++)
	{
		if (a[i] == a[i + 1])p++;
		else 
		{ 
			if (count < p) { count = p; p = 1; }
			else p = 1;
		}
	}
	cout<<"Наибольшее количество идущих подряд одинаковых символов:" << count;
	return 0;
}