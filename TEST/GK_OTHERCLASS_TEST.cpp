#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Hay nhap so nguyen duong n\t";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ' ';
            while (n % i == 0)
                n /= i;
        }
    }

    return 0;
}