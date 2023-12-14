//BÀI NÀY SẼ TÍNH TỔNG ĐƯỜNG CHÉO PHỤ
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so dong x cot cua mang hai chieu (nxn): ";
    cin >> n;

    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan tu cua dong " << (i + 1) << " cot " << (j + 1) << " : ";
            cin >> a[i][j];
        }
    
    int total = 0;
    for (int i = 0; i < n; i++)
        total += a[i][n - (i + 1)];

    cout << "------------------------------\n";
    cout << "Tong duong cheo phu cua mang la " << total; 
    return 0;
}