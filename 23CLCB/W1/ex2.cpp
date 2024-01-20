#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, min;

    cin >> a >> b >> c >> d;

    if (a <= b || a <= c || a <= d)
        min = a;
    else if (b <= a || b <= c || b <= d)
        min = b;
    else if (c <= a || c <= b || c <= d)
        min = c;
    else 
        min = d;
// PHAN NHUT ANH
    cout << "min: " << min;

    return 0;
}
