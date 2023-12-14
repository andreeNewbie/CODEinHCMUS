#include<iostream>

using namespace std;

int main()
{
    int sex;
    double A1, A2, A3, A4, A5, B,
           mo, phanTram, kg, coTay, eo, hong, canhTay;
    
    cout << "Nhap gioi tinh Nam: 0 Nu: 1 ";
    cin >> sex;

    cout << "Nhap can nang ";
    cin >> kg;

    switch(sex)
    {
        case 0:
            cout << "Nhap kich thuoc co tay " << endl;
            cin >> coTay;
            A1 = (kg * 1.082) + 9.442;
            A2 = coTay * 4.15;
            B = A1 - A2;
            mo = kg - B;
            phanTram = mo * 100 / kg;
            break;
        case 1:
            cout << "Nhap kich thuoc co tay, eo, hong, canh tay " << endl;
            cin >> coTay >> eo >> hong >> canhTay;
            A1 = (kg * 0.732) + 8.987;
            A2 = coTay / 3.140;
            A3 = eo * 0.157;
            A4 = hong * 0.249;
            A5 = canhTay * 0.434;
            B = A1 + A2 - A3 - A4 + A5;
            mo = kg - B;
            phanTram = mo * 100 / kg;
            break;
    }
    
    cout << "Luong mo cua ban la " << mo << endl
         << "Phan tram mo cua ban la " << phanTram;
    return 0;
}