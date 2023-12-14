#include<iostream>
using namespace std;

void soLe(int &);
void soChan(int &);

int main()
{
    int k = 0, x;

    cout << "Nhap vao so x voi a0 = x: ";
    cin >> x;

    cout << "Day so la: ";
    cout << x << ", ";

    while(x != 1)
    {
        k++;
        if(x % 2 == 0)
            soChan(x);
        else
            soLe(x);
        if (x == 1)
            {
                cout << x << endl;
                break;
            }
        cout << x << ", ";
    }
    cout << "K = " << k;
    return 0;
}

void soChan(int &x)
{
    x = x / 2;
   
}

void soLe(int &x)
{
    x = 3 * x + 1;
}
