#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const double k = 6.67 * pow(10, -11);
    double M1, M2, d, F;

    cout << "Nhap khoi luong 2 vat: \n";
    cin >> M1 >> M2;
    cout << "Nhap khoang cach d giua hai vat do \n";
    cin >> d;

    F = (k * M1 * M2) / pow(d,2);

    cout << "Luc hap dan giua hai vat do la: " << F << " N";

    return 0;
}