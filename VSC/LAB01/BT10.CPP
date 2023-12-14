#include<iostream>
using namespace std;

int main()
{
    int soNguyen, num1, num2;
    cout << "Hay nhap mot so nguyen: ";
    cin >> soNguyen;
    num1 = soNguyen / 10;
    num2 = soNguyen % 10;
    cout << num2 << num1;
    return 0;

}