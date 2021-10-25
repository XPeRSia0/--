#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double x,y;
    cout << "Введите длину в сантиметрах: " ;
    cin >>x;
    if (x < 0) cout << "Ошибка";
    else
    { 
    y = x/2.5;
    cout << "Длина в дюймах: " << y;
    }
    return 0;
}