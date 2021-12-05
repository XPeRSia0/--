#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a[20],i,n=999;
    srand(time(0));
    for (i = 0; i < 19; i++)
    {
        a[i] = rand() % 1000 - 500;
    }
    for (i = 0; i < 19; i++)
    {
        cout << a[i]<<" ";
        if ((a[i] < 0 && a[i + 1] < 0) || (a[i] >= 0 && a[i + 1] >= 0))
        {
            cout << n<<" ";
        }
    }
    return 0;
}