#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Ba canh nay khong the tao thanh mot tam giac dau ma oi.";
    }
    else
    {
        if(a == b && a == c)
        {
            cout << "Day la tam giac deu.";
        }
        else if(a == b || a == c || b == c)
        {
            cout << "Day la tam giac can.";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            cout << "Day la tam giac vuong";
        }
        else 
        {
            cout << "Day la tam giac thuong";
        }
    }
    return 0;
}