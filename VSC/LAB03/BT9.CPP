#include<iostream>
using namespace std;
int main()
{
    int h;
    cin >> h;
    for(int i = 1; i <= h; i++)
    {
        for(int n = 1; n <= h - i; n++)
        {
            cout << " ";
        }
        for(int n = 1; n <= i * 2 - 1; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}