#include<iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    a = 1;
    b = 0;
    for(int i = 1; i <= n; i++)
    {   
        a *= i;
        b += a;
    }
    cout << b;
    return 0;
}