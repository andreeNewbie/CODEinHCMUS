#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "nhap vao so nguyen duong n: ";
    cin >> n;

    int a = sqrt(n);
    double b = sqrt(n);

    if (b == a)
    {
        cout << n << " la so chinh phuong" << endl;
    
    }
    else
    {
        cout << n << " khong phai so chinh phuong" << endl;
    }

    return 0;
}