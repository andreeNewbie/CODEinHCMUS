#include<iostream>

using namespace std;

bool check(int distinc[], int index, int x)
{
    for (int i = 0; i <= index; i++)
        if (distinc[i] == x)
            return false;
    return true;
}

int phanBiet(int prime[], int distinc[], int soNguyenTo)
{
    int index = 0;
    for (int i = 0; i < soNguyenTo; i++)
        if (check(distinc, index, prime[i]))
            distinc[index++] = prime[i];
    return index;
}

int countPrime(int a[], int prime[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j <= a[i]; j++)
            if (a[i] % j == 0)
                count++;
        if(count == 2)
            prime[total++] = a[i];
    }
    return total;
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Hay nhap gia tri cua phan tu thu " << (i + 1) << " : ";
        cin >> a[i];
    }

    int prime[100];
    int soNguyenTo = countPrime(a, prime, n);

    cout << "Day so ban nhap co " << soNguyenTo << " so nguyen to\n";
    for (int i = 0; i < soNguyenTo; i++)
    {
        cout << prime[i] << "\t";
    }

    int distinc[100];
    int index = phanBiet(prime, distinc, soNguyenTo);

    cout << "\nTrong do co " << index << " so khac nhau la: ";
    for (int i = 0; i < index; i++)
        cout << distinc[i] << "\t";

    return 0;
}