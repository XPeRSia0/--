#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double* pa = new double;
    double* pb = new double;
    cout << "Введите два числа:";
    cin >> *pa >> *pb;
    *pa *= 2;
    cout << *pa << " " << *pb;
    return 0;
}
