#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if(a <= 9 && a >= 0)
    {
    cout << a << endl;
    }
    else if (a <= 35)
    {
       a = a + 55;
       cout << char(a) << endl; 
    }
    else
    {
        cout << "Ban nhap sai yeu cau" << endl;
    }
    return 0;
}