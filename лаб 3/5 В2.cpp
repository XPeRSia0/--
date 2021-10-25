#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    long long a[10], n, i;
    cout << "Введите число: ";
    cin >> n;
    if ((n < 0) || (fmod(n, 1) != 0)) { cout << "Число не натуральное"; return 0; }
    if (n == 0) { cout << "Количество повторений миниальной цифры в числе: " << 1; return 0; }
    for (i = 0; i < 10; i++) a[i] = 0;
        while (n != 0)
        {
            i = n % 10;
            a[i] = a[i] + 1;
            n = n / 10;
        }
    for (i = 0; i < 10; i++)
        if(a[i] != 0) { cout << "Количество повторений миниальной цифры в числе: " << a[i]; return 0; }
}