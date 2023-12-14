#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int BSCNN;
    int Tich = a * b;
    for(int i = 1; i <= Tich ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            BSCNN = i;
            break;
        }
    }
    cout << BSCNN;
}