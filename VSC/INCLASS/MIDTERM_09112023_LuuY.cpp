// Luu y cach break vong lap !!!
#include<iostream>
using namespace std;
int main()
{
    int r1, r2, k1, k2;
    cin >> r1 >> r2;
    bool wannaBreak = false;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (i * r1 == j * r2)
            {
                k1 = i;
                k2 = j;
                wannaBreak = true;
                if (wannaBreak) 
                    break;
            }
            if (wannaBreak) 
                break;
        }
    }
    
    cout << k1 << "\t" << k2;
    return 0;
}