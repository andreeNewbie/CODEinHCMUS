#include<iostream>
using namespace std;
int main()
{
    int nam;

    cout << "Nhap so nam (YYYY) " << endl;
    cin >> nam;

    if (nam % 100 == 0)
    { 
        if(nam % 400 == 0)
        { 
            cout << "Nam " << nam << " la nam nhuan." << endl;
        }
        else
        {
            cout << "Nam " << nam << " khong phai la nam nhuan." << endl;
        }
    }
    else
    {
        cout << "Nam " << nam << (nam % 4 == 0 ? " la nam nhuan" : " khong phai la nam nhuan");
    }

    return 0;

}