#include<iostream>
using namespace std;

bool isX(int);

//Day la cau 4B
int main()
{
    int n, a, b, c;
    cout << "Nhap vao so a va so b\t";
    cin >> a >> b;
    if(a < 0 || b <0)
     return 0;
    else if(a > b)
    {
        c = a;   
        a = b;
        b = c;
    }
    for(n = a; n <= b; n++)
    {
        bool result = isX(n);
        if (result)
            cout << n << "\t";
    }
    return 0;
}


//Day la cau 4A
// int main()
// {
//     int n;
//     cin >> n;
//     bool result;
//     result = isX(n);
//     if(result)
//         cout << n << " la so dac biet";
//     else
//         cout << n << " khong la so dac biet";
//     return 0;
// }

bool isX(int n)
{
    while (n > 99)
    {
        int n1 = n / 10;
        int num1 = n % 10;
        n = n / 10;
        int num2 = n % 10;
        n = n / 10;
        int num3 = n % 10;
        if ( (num2 + num3) % 10 != num1)
            return false;
        else
            return true;
        n = n1;
    }
    return false;
}