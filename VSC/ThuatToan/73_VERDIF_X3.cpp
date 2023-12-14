#include<iostream>
using namespace std;
int main()
{
    int x, n;

    cout << "Hay nhap x\n";
    cin >> x;
    cout << "Hay nhap n\n";
    cin >> n;

    double S = -1;

    for (int i = 1; i <= n; i++)
    {
        int mu;
        if (i % 2 == 0)
            mu = -1;
        else
            mu = 1;
        
        int tu = 1;
        int mau = 1;
        for (int j = 1; j <= 2*i; j++)
        {
            tu *= x;
            mau *= j;
        } 

        S += 1.0 * mu * tu / mau; 
    }
     cout << S;
     return 0;
}