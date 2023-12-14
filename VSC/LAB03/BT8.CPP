#include<iostream>
using namespace std;
int main()
{
    for(int n =1; n <= 9; n++)
    {
        for( int i = 1; i <= 10; i++)
        {
            int a = i * n;
            cout << a << endl;
        }
    }
    return 0;
}