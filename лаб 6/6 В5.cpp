#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string text = "ABCDDDqweeewwv";
    cout << text << endl;
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = i; j < text.length(); j++)
        {
            if (text[i] == text[j] && i != j) 
            {

                text.erase(j, 1);
                j--;
            }
        }
    }
    cout<<"Количество различных элементов в массиве:"<< text.length();
}