#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a - b) * (c - b) <= 0 )
    cout << b;
    else if ((a - c) * (b - c) <= 0)
    cout << c;
    else if ((b - a) * (c - a) <= 0)
    cout << a;

    return 0;
}