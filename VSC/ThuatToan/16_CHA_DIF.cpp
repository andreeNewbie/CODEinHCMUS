#include<iostream>
using namespace std;
int main()
{
    int n, x;
    double S = 0;
    cout << "Nhap vao n va x\n";
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        int pow = 1, daySo = 0;
        for(int j = 1; j <= i; j++)
        {
            daySo += j;
            pow *= x;
        }
        S += 1.0 * pow / daySo;      
    }
    cout << S;
    return 0;
}