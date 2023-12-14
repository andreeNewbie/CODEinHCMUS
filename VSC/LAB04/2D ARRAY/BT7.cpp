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

int countPrime(int a[][100], int prime[], int n, int m)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            int count = 0;
            for (int j = 1; j <= a[i][k]; j++)
                if (a[i][k] % j == 0)
                    count++;
            if(count == 2)
                prime[total++] = a[i][k];
        }
    }
    return total;
}

int main()
{
    int n, m;
    cout << "Nhap so phan tu cua mang: (lan luot NxM) ";
    cin >> n >> m ;

    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Hay nhap gia tri cua phan tu cua dong " << (i + 1) << " cot " << (j + 1) << " : ";
            cin >> a[i][j];
        }
    }

    int prime[100];
    int soNguyenTo = countPrime(a, prime, n, m);

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