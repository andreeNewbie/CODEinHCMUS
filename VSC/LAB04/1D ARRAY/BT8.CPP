#include<iostream>
using namespace std;

void deleteX(int [], int &, int);

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

    int x;
    cout << "Hay nhap gia tri x ma ban can xoa: ";
    cin >> x;

    deleteX(a, n, x);

    cout << "Ham sau khi xoa gia tri x la:\n ";
    for (int i = 0; i < n; i++)
        cout << "Phan tu thu " << (i + 1) << " la: " <<  a[i] << endl;
    

    return 0;

}

void deleteX(int a[], int &n, int x)
{
    int i = 0;
    while(i < n)
    {
        if (a[i] == x)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j+1];
            n--;
        }
        else
            i++;
    }
}


