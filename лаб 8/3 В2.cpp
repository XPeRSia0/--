#include <iostream>
using namespace std;
int main()
{
    int  i;
    string f = " ffg fdgh fgdfh fg fhsd rr  fgg fghf  ";
    char* b = new char[f.length()];
    for (i = 0; i < f.length(); i++)
        b[i] = f[i];
    for (i = 0; i < f.length(); i++)
        if (b[i] == ' ') b[i] = '_';
    for (i = 0; i < f.length(); i++)
    {
        cout << b[i];
    }
    delete[]b;
    return 0;
}