#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, * pa = &a, * pb = &b;
    cin >> a >> b;
    if (*pa > *pb)*pa *= 2;
    else *pb /= 2;
    cout << a << ' ' << b;
    return 0;
}