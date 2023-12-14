#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int del = 0, i = 1;
    while(del <= n)
    {
        del++;
        i = i + k - 1 + del;
        while(i > n)
        i -= n;
    }
    cout << i;
    return 0;
}