#include<iostream>
using namespace std;

int main()
{
    const double VAT = 0.1;
    double gia, thanhtien;
    cout << "nhap gia tien san pham: ";
    cin >> gia;
    
    thanhtien = gia + gia * VAT;

    cout << "\nSo tien can phai thanh toan la: " << thanhtien;
    return 0;

}