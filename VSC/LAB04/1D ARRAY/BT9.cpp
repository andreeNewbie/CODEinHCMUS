#include<iostream>

using namespace std;

void deletePhanTu(int a[], int &n, int index, int phanTu)
{
    for (int i = index; i < n; i++)
        a[i] = a[i + phanTu];
    n -= phanTu;
}

int main()
{
    int a[256];
    int n, phanTu, index;

    cout << "Mang cua ban co bao nhieu phan tu ?\n ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hay nhap gia tri cua phan tu a[" << i <<"]: ";
        cin >> a[i];
    }

    cout << "Ban muon xoa tu phan tu thu bao nhieu ?\n";
    cin >> index;

    cout << "Ban muon xoa bao nhieu phan tu ?\n";
    cin >> phanTu;

    deletePhanTu(a, n, index, phanTu);

    cout << "Ham sau khi xoa la:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;

}



