#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Hay nhap so x \n ";
    cin >> x;

    y = pow(x,3) - 5*pow(x,2) + 6;

    cout << "Ket qua bieu thuc la " << y;

    return 0;

}