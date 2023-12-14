#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << "Nhap vao so nguyen n: " << endl;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << n << " la so le";
    }
    else
    { 
        cout << n << " la so chan";
    }

    return 0;
}