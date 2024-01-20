#include <iostream>
using namespace std;
int main()
{
    int plate;
    cin >> plate;

    int sum = 0;
    while (plate != 0)
    {
        sum += plate % 10;
        plate /= 10;
    }
    cout << sum % 10;

    return 0;
}