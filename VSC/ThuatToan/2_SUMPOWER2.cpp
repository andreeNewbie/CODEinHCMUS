#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Hay nhap n\n";
    cin >> n;

    int S = 0;
    int phanTu = 0;
    for (int i = 1; i <= n; i++)
    {
        phanTu = i * i;
        S += phanTu;
    }
    cout << endl << S;
    return 0;
}