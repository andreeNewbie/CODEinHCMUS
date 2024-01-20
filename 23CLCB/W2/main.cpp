#include "function.h"

int main()
{
    int n;
    cin >> n;
    //cout << sum(n) << endl;
    //cout << ln2(n);
    //countSoDacBiet();
    //cout << soDacBiet(132);
    // int min = n;
    // int max = n;

    // while (n != 0)
    // {
    //    findMinMax(n, min, max); 
    //    cin >> n;
    // }

    // cout << endl << min << endl << max;
    // return 0;
    soDaoNguoc(n);
    cout << endl << isItOdd(n) << endl;
    return 0;
}