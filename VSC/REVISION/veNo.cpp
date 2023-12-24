#include<iostream>

using namespace std;

bool check (int x)
{
    int a;
    int n = 1;
    while ( a != x)
    {
        a = n + (n - 1);
        if (a == x) return true;
        if (a > x) return false;
        n += 2;
    }
}

void veHinh(int x)
{
    x = x / 2 + 1;
    //cout  << "x = " << x << endl;

    int k = x / 2 + 1;
    //cout << "k = " << k << endl;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
            cout << " ";
        for (int j = 0; j < i * 2 + 1; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 1; i < k; i++)
    {
        for(int j = 0; j < i; j ++)
            cout << " ";
        for (int j = 0; j < x - i * 2; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 1; i < k; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
            cout << " ";
        for (int j = 0; j < i * 2 + 1; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 1; i < k; i++)
    {
        for(int j = 0; j < i; j ++)
            cout << " ";
        for (int j = 0; j < x - i * 2; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    if (check (n)) veHinh(n);
    else cout << "Hay nhap so khac, so vua nhap khong the ve ra hinh no ";


    return 0;
}