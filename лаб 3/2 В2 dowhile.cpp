#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double min=-40, max=50, sum=0, a=0;
    do
    {
        a = min++;
        sum = sum + a;
    } while (a < max); 
    cout<< "Сумма целых чисел в интервале от –40 до +50=" << sum;
    return 0;
}