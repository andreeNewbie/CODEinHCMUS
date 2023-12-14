#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for (int i = 65; i <= 90; i++)
        {
            int j = i + 32;
            cout << setw(10) << setfill(' ') << left << (char)i << i << "  |  " ;
            cout << setw(10) << setfill(' ') << left << (char)j << j << endl ;
        }

    return 0;
}