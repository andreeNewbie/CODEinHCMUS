// chạy từ 2 về n-1 nếu chia hết => break
#include<iostream>
using namespace std;
int main()
{
    int i, n, soNguyenTo;
    cout << "Nhap so n\n";
    cin >> n;
    while(n <= 0 || n >= 50 )
    {
        cout << "Hay nhap 0 < n < 50 ban nhe\n";
        cin >> n;
    }
    int dem = 0;
    for (i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            dem++;
        }
    }
    if(dem == 2)
        cout << n << " la so nguyen to";
    else
        cout << n << " khong la so nguyen to\n";
    return 0;
}