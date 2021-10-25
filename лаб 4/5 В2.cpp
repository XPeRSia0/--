#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int x =0 , y = 0, z = 0,i;
    cout << "---------------------" << endl << "Число \tКвадрат Куб" << endl << "---------------------" << endl;
    for (i = 0; i < 10; i++)
    { 
        x = x++;
        y = y++;
        z = z++;
        cout << x << "\t" << pow(y, 2) << "\t" << pow(z, 3) <<endl;
    }
    return 0;
}