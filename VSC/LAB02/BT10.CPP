#include<iostream>
using namespace std;
int main()
{
    float chiSoMoi, chiSoCu, tieuThu, giaTien;
    cout << "Hay nhap lan luot chi so moi va chi so cu vao day: "<< endl;
    cin >> chiSoMoi >> chiSoCu;
    tieuThu = chiSoMoi - chiSoCu;
    cout << "\n";
    if(tieuThu < 0)
    {
        cout << "ban nhap sai con me no roi " << endl;
    }
    else
    {
        if(tieuThu <= 100)
        {
            giaTien = tieuThu * 1000;
            cout << chiSoCu << endl 
                 << chiSoMoi << endl 
                 << tieuThu << endl
                 << giaTien << endl;
        }
        else if(tieuThu > 100 && tieuThu <= 150)
        {
            giaTien = 100 * 1000 + (tieuThu - 100) * 1200;
            cout << chiSoCu << endl 
                 << chiSoMoi << endl 
                 << tieuThu << endl
                 << giaTien << endl;
        }
        else if(tieuThu > 150 && tieuThu <= 200)
        {
            giaTien = 100 * 1000 + 50 * 1200 + (tieuThu - 150) * 2000;
            cout << chiSoCu << endl 
                 << chiSoMoi << endl 
                 << tieuThu << endl
                 << giaTien << endl;
        }
        else
        {
            giaTien = 100 * 1000 + 50 * (1200 + 2000) + (tieuThu - 200) * 2500;
            cout << chiSoCu << endl 
                 << chiSoMoi << endl 
                 << tieuThu << endl
                 << giaTien << endl;
        }
    }
    return 0;
}