#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long long x = 1;
    int a[20],i,n=0;
    srand(time(0));
    for (i = 0; i <= 19; i++)
    {
        a[i] = rand() % 41 - 20;
        cout << a[i] << ' ';
    }
    cout << endl;
    for (i = 0;i <= 19;i++)
    {
        if (a[i] < 0)
        {
            cout << "Номер первого отрицательного элемента:" << ++i << endl;break;
        }
    }
    for (i = 0;i <= 19;i++)
    {
        if (a[i] > 0) x *= a[i];
    }
    cout << "Произведение положительных элементов массива:" << x<<endl;
    for (i = 0;i <= 19;i++)
    {
        if (a[i] == 1)n++;
    }
    cout << "Количество элементов массива равных 1:" << n<<endl;
    return 0;
}