#include<iostream>
using namespace std;
int main()
{
    float km, giaTien;
    cout << "Ban di bao nhieu km? : " << endl;
    cin >> km;
    if(km <= 1)
    {
       giaTien = km * 15;
       cout << giaTien << endl; 
    }
    else if(km > 1 && km <= 6)
    {
        giaTien = 15 * 1 + 13.5 * (km - 1);
        cout << giaTien << endl;
    }
    else if (km > 6)
    {
        if(km > 120)
        {
            giaTien = 15 * 1 + 13.5 * 4 + 11 * (km - 5);
            cout << giaTien * 0.9 << endl;
        }
        else
        {
            giaTien = 15 * 1 + 13.5 * 4 + 11 * (km - 5);
            cout << giaTien << endl;
        }
    }
        return 0;
}
    
