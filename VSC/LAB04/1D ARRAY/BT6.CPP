#include<iostream>
using namespace std;

bool isAscendingOrder(int[], int);

int main()
{
    int a[256];

    int n;
    cout << "Hay nhap so phan tu cua mang a: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hay nhap phan tu thu " << (i + 1) << " cua mang: ";
        cin >> a[i];
    }

    bool Ascending = isAscendingOrder(a, n);

    if (Ascending)
        cout << "Day la day so tang dan";
    else
        cout << "Day la day so KHONG tang dan";
}

bool isAscendingOrder(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
