#include<iostream>
using namespace std;
int main()
{
    int h, h1, h2;
    cin >> h;
    
    if(h % 2 == 0)
        cout << "Hay nhap chieu cao la so le ";
    else
    {
        h1 = (h - 1) / 2 + 1;
        h2 = h - h1;

        for (int i = 1; i <= h1; i++)
        {
            for (int n = 1; n <= h1 - i; n++)
                cout << ' ';
            for (int n = 1; n <= 2 * i - 1; n++)
                cout << "K";
            cout << endl;
        }

        for (int i = h2; i >= 1; i--)
        {
            for (int j = 1; j <= h2 - i + 1; j++)
                cout << ' ';
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "K";
            cout << endl;
        } 
    }
    
    return 0;
    
}