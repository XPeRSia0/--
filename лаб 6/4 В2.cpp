#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    const int p = 20;
    int a[p], i, n = 0, x = -101;
    srand(time(0));
    for (i = 0; i <= 19; i++)
    {
        a[i] = rand() % 201 - 100;
        cout << a[i] << ' ';
    }
    cout<<endl << "-------------" << endl;
    for (i = 0; i <= 19; i++)
    {
        if (a[i] > x)  x = a[i];
    }
    for (i = 0; i <= 19; i++)
    {
        if (a[i] == x)
        {
            n = a[i];
            a[i] = a[2];
            break;
        }
    }
    a[2] = n;
    for (i = 0; i <= 19; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}