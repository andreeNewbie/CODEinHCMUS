#include<iostream>
using namespace std;

int main()
{
    float toan, li, hoa, a00;
    cout << "Nhap diem 3 mon: Toan Li Hoa\n";
    cin >> toan >> li >> hoa;
    
    a00 = toan + li + hoa;

    if (a00 >= 15 && toan >= 4 && li >= 4 && hoa >= 4 )
    {
        cout << "Ban da dau\n";
        if (toan > 5 && li > 5 && hoa > 5)
        {
            cout << "Ban hoc deu cac mon \n";
        }
        else 
        {
            cout << "Ban chua hoc deu cac mon \n";
        }

    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}