#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    char a[20];
    cout << "Введите имя:";
    cin>>a;
    cout << "Привет "<<a;
    return 0;
}