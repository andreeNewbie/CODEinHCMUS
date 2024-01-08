#include <iostream>
#include <cmath>

using namespace std;

int P(int n)
{
    if (n == 1)
        return 1;
    else 
        return P(n - 1) + (pow(-1, n + 1) * n);
}

int main()
{
    int n;
    cin >> n;

    cout << P(n);

    return 0;
}