#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Hay nhap n\n";
    cin >> n;

    int Sum = 0;
    for(int i = 1; i <= n; i++)
        Sum +=i;
    
    cout << "Tong day so S = 1 + 2 + 3 + ... + " << n << " la " << Sum;
    return 0;
}