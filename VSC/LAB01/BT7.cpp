#include<iostream>
using namespace std;

int main()
{
    double D,m,V;
    cout << "Hay nhap khoi luong rieng cua vat va khoi luong cua vat\n";
    cin >> D >> m;
    V = m / D;
    cout << "\nThe tich cua vat la " << V << " m3";
    return 0;
}