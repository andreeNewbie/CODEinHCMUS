#include<iostream>
using namespace std;

int main()
{
    int dong1, dong2, dong5, dong10, tienCanDoi;

    cout << "Ban can doi bao nhieu tien? ";
    cin >> tienCanDoi;

    dong10 = tienCanDoi / 10;
    dong5 = (tienCanDoi - dong10 * 10) /5;
    dong2 = (tienCanDoi - dong10 * 10 - dong5 * 5) / 2;
    dong1 = (tienCanDoi - dong10 * 10 - dong5 * 5) % 2;

    cout << dong10 << endl;
    cout << dong5 << endl;
    cout << dong2 << endl;
    cout << dong1 << endl;

    return 0;
}