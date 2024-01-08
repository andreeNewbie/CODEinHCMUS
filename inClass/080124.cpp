#include <iostream>

using namespace std;

int P(int n)
{
    if (n == 0)
        return 1;
    else
        return P (n - 1) + (2 * n + 1);
}

int main()
{
    int n;
    cout << "Hay nhap n";
    cin >> n;

    cout << "P(n) = " << P(n);

    return 0;
}