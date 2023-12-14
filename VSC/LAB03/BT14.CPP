#include<iostream>
using namespace std;
int main()
{
    int f, f0 = 0, f1 = 1;
    int n;
    cin >> n;

    if (n <2)
    return 0;

    for(int i = 2; i <= n; i++)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    cout << f;

}