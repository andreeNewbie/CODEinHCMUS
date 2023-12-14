#include<iostream>
using namespace std;
int main()
{
    int i, n;
    double S, a;
    cin >> n;
    S = 1;
    i = 2;
    if(n >= 2)
    {
        while (i <= n)
        {
            a = 1.0 * i / (i - 1);
            S = S + a;
            i++;
        }
       
    }
    else cout << "Hay nhap n lon hon hoac bang 2";
    cout << S;
    return 0;
}