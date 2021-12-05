#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int p = 26;
    int a[p], b[p], i,x=0;
    srand(time(0));
    for (i = 0; i <= 25; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << ' ';
        x += a[i];
    }
    cout << endl << "--------------" << endl;
    for (i = 0; i <= 25; i++)
    {
        b[i] = rand() % 10;
        cout << b[i] << ' ';
        x += a[i];
    }
    cout<<endl << "Общее количество мячей, забитых командой в двух чемпионатах:" << x;
    return 0;
}