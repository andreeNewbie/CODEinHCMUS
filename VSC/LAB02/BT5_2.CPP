#include<iostream>
using namespace std;
int main()
{
    int thang;
    
    cout << "Nhap thang " << endl;
    cin >> thang;

    if ( thang == 2)
    { 
        cout << "Thang 2 co 28 hoac 29 ngay. ";
    }
    else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11)
    { 
        cout << "Thang " << thang << " co 31 ngay.";
    }
    else 
    { 
        cout << "Thang " << thang << " co 30 ngay";
    }
    return 0;
}