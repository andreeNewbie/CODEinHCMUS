#include<iostream>

using namespace std;

int countOccurrences(int a[], int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if(a[i] == x) sum++;
    return sum;
}

int main()
{
    int phanTu;
    cout << "Mang co bao nhieu phan tu?\n";
    cin >> phanTu;

    int a[100];
    int appear;

    for (int i = 0; i < phanTu; i++)
    {
        cout << "Nhap vao phan tu thu " << (i + 1) << " : ";
        cin >> a[i];
    }

    cout << "Ban muon kiem tra so lan xuat hien cua phan tu nao? \n";
    cin >>  appear;

    int sum = countOccurrences(a, phanTu, appear);
    cout << "So lan xuat hien cua phan tu " << appear << " la " << sum ;

    return 0;
}