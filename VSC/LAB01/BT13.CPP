#include<iostream>
using namespace std;
int main()
{ 
    double soTanGao, soKgGao;
    int baoDay, soBaoGao,x;
    bool baoChuaDay;

    cout << "Nhap so tan gao";
    cin >> soTanGao;

    soKgGao = soTanGao * 1000;
     
    baoDay = soKgGao / 20;
    baoChuaDay = (int)soKgGao % 20;

    soBaoGao = baoDay + baoChuaDay;
    cout << soKgGao << endl;
    cout << soBaoGao << endl;
    cout << baoDay << endl;
    cout << baoChuaDay;

    return 0;
}