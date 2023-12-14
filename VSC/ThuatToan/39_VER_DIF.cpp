#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double S = 0;
    cout << "Hay nhap n\n";
    cin >> n;
    for (int i = 1; i <= n + 1; i ++)
    {
        int giaiThua = 1;
        for (int j = 1; j <= i; j++)
            giaiThua *= j;
        double mu = 1.0 / ( i + 1) ;
        int hangTu = S + giaiThua;
        S = pow(hangTu, mu);
    }
    cout << S;
    return 0;
}