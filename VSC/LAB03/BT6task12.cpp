#include<iostream>
using namespace std;
int main()
{
    int a, b, changing;
    cin >> a >> b;

// a luon la so nho nhat để dễ chạy
    if(b < a)
    {
        changing = a;
        a = b;
        b = changing;
    }

//tim UCLN cua 2 so a, b
    int USCLN = 0;
    for(int i = 1; i <= a ; i++)
    {
        if(a % i == 0 && b % i == 0)
            USCLN = i;
    }
    cout << "\nUoc so chung lon nhat la " <<  USCLN << endl << endl;

//Tim cac cap x và y nho nhat
    int x;
    double y;
//x lớn hơn bằng 2
    for(x = 2; x <= 100; x++)
    {
        y = (USCLN * 1.0 - a * x) / b;
        if( (int)y == y )
        {
            cout << "x la " << x << "\ty la " << y << endl;
            break;
        }
    }
// x bé hơn 2
    for(x = 1; x >= -100; x--)
    {
        y = (USCLN * 1.0 - a * x) / b;
        if( (int)y == y )
        {
        cout << "x la " << x << "\ty la " << y << endl;
            break;
        }
    }

    return 0;
}