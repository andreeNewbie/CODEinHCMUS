#include <iostream>

using namespace std;

int main()
{
    int m, n, a, count;

    cin >> m >> n >> a;

    count = m / a;
    if (m % a > 0)
        count++;
    
    if(n % a > 0)
        count *= (n / a) + 1;
    else
        count *= n / a;

    cout << count;

    return 0;
}