#include<iostream>
using namespace std;
int main()
{
    int h;

    cout << "Nhap chieu cao hinh thoi ";
    cin >> h;

   int a = h / 2; //h = 5 -> a = 2
   int b = h - a; //b = 3

   for (int i = 1; i <= b ; i++)
   {
        for (int k = 1; k <= (b - i); k++)
            cout << "  ";
        for (int k = 1; k <= (2 * i - 1); k++)
            cout << "* ";
        cout << endl;
   }

    for (int i = a; i >= 1; i--)
    {
            for (int k = 1; k <= (a - i + 1); k++)
                cout << "  ";
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << "* ";
            cout << endl;
    }

   return 0;
}