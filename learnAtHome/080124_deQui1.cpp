#include <iostream>
#include <cmath>

using namespace std;

double f(int n)
{
    if (n == 1) return 1;
    else    
        return f(n - 1) + sqrt();
}

int main()
{
    int n;
    cin >> n;

    cout << f(n);

    return 0;
}