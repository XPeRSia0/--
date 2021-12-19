#include <iostream>
#include <string>
using namespace std;
struct student
{
    string fio;
    int group;
    int scor[3];
    int sb;
};
void Sort(student* studs, int& len)
{
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = i + 1; j < len; j++) 
        {
            if (studs[i].sb > studs[j].sb) 
            {
                student x = studs[i];
                studs[i] = studs[j];
                studs[j] = x;
            }
        }
    }
}
int main() 
{
    setlocale(LC_ALL, "rus");
    int n = 0,i,j,t=0;
    cout << "Введите количество студентов: ";
    cin >> n;
    student* st = new student[n];
    for (i = 0; i < n; i++) 
    {
        cout << "Введите ФИО: ";
        cin >> st[i].fio;
        cout << "Введите номер группы: ";
        cin >> st[i].group;
        cout << "Оценки:" << endl;
        st[i].sb = 0;
        for (j = 0; j < 3; j++)
        {
            cin >> st[i].scor[j];
            st[i].sb += st[i].scor[j];
        }
        st[i].sb /= 3;
    }
    Sort(st, n);
    cout << endl<<"Студенты имеющие оценки 4 и 5"<<endl;
    for (int i = 0; i != n; i++) 
    {
        if (st[i].sb == 4|| st[i].sb == 5)
        {
            t++;
            cout<<"ФИО:" << st[i].fio;
            cout<<" Группа:" << st[i].group << endl;
        }
    }
    if (t == 0) cout<<endl << "Студентов с оценками 4 и 5 нету";
    delete[]st;
    return 0;
}