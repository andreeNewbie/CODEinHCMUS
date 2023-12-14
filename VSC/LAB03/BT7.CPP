#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n<0 || n> 9999)
    {
        cout << "Ban hay nhap so nguyen n co 4 chu so " << endl;
        cin >> n;
    }
    int bin = 0, p = 1;
    // bin luu gia tri nhi phan, p lưu lũy thừa của 10.
    while (n > 0 ) // chạy n về 0.
    {
        bin = bin + (n % 2)*p;
        n /= 2;
        p *= 10;
    }
    cout << bin << endl;
    return 0;
}