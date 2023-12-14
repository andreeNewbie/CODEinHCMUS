#include<iostream>
using namespace std;

int main()
{
    int gio, phut, giay;
    cout << "Hay nhap gio, phut, giay vao \n";
    cin >> gio >> phut >> giay;

    if (gio < 0 || phut < 0 || phut > 60 || giay < 0 || giay > 60)
    {
        cout << "Du lieu ban nhap khong hop le !";
        return 0;
    }
    else
    {
        cout << "Thoi diem ban nhap la " << gio << ":" << phut << ":" << giay;
        return 0;
    }
}