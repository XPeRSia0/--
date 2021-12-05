#include <iostream>
using namespace std;
int main()
{
    int i, j;
    string text = "abcdabcdddd";
    for (i = 0; i < text.length(); i++)
    {
        for (j = i; j < text.length(); j++)
        {
            if (text[i] == text[j] && i != j) 
            {
                text.erase(j, 1);
                j--;
            }
        }
    }
    cout << text;
    return 0;
}