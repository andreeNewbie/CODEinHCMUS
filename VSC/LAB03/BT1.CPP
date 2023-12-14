#include<iostream>
using namespace std;
int main()
{
    int n, i, tong;
    cin >> n;
    tong = 0;
    for (i = 0; i <= n; i++)
    {
        if(i % 4 == 0 && i % 5 != 0)
        {
            tong += i;
        }
    }
    cout << tong;
    return 0;
}