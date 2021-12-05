#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a[20], i, x = 0;
    srand(time(0));
    for (i = 0; i <= 19; i++)
    {
    tryAgain:
        a[i] = rand() % 20;
        for (x = i; x >= 0; x--) if (a[i] == a[x - 1])goto tryAgain;
        cout << a[i] << ' ';
    }
    return 0;
}