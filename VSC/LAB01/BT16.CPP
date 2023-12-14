#include<iostream>
using namespace std;

int main()
{
    int a, b, donvi, chuc, tram, num1, num2, num3, result;
    cout << "hay nhap so a co 3 chu so \n ";
    cin >> a;
    cout << "hay nhap so b co 3 chu so \n ";
    cin >> b;

    if (1000 > a && a > 99 && 1000 > b && b > 99)
    {
    cout << "\n";
    cout << "Phep nhan tay la \n";
    
    cout << "   " << a << "\n";
    cout << " x " << b << "\n";
    cout << "----------------" << "\n";

    donvi = b % 10;
    num1 = donvi * a;
    cout << "      " << num1 << "\n";

    int haisocuoi = b % 100;
    chuc = haisocuoi / 10;
    num2 = chuc * a;
    cout << "    " << num2 << "\n";

    tram = b / 100;
    num3 = tram*a;
    cout << "  " << num3 << "\n";

    cout << "----------------" << "\n";
    
    result = a * b;

    cout << result;
 
    return 0;
    }
    else
    {
        cout << "Nhap sai yeu cau";
        return 0;
    }
}