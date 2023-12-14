#include<iostream>
using namespace std;

int main()
{
    int gio, phut, giay, s;
    cout << "Hay nhap so giay can tinh: ";
    cin >> s;

    gio = s / 3600;
    phut = (s - 3600 * gio) / 60;
    giay = s % 60;

    cout << gio << ":" << phut << ":" << giay;
    return 0;
} 