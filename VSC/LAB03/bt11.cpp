#include<iostream>
using namespace std;
int main()
{
    double ngay, phanTramTang, tong, luongKhoiDiem;

    cout << "Luong khoi diem cua ban la bao nhieu\n";
    cin >> luongKhoiDiem;
    cout << "Phan tram tang moi ngay la bao nhieu\n";
    cin >> phanTramTang;
    cout << "Ban lam bao nhieu ngay?\n ";
    cin >> ngay;

    tong = 0;

    while (ngay < 1)
    {
        cout << "Hay nhap ngay lai";
        cin >> ngay;
    }

    for(int i = 1; i <= ngay; i++)
    {
        cout << "Luong ngay " << i << " la " << luongKhoiDiem << endl;
        tong += luongKhoiDiem;
        luongKhoiDiem *= (1 + phanTramTang);
    }
    cout << "tong luong sau " << ngay << " ngay lam viec la " << tong << endl;

}