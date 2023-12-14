#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int phut, giay;

    cout << "Nhap vao so phut: ";
    cin >> phut;
    
    cout << "Nhap vao so giay: ";
    cin >> giay;

    while(phut)
    {
        for(int i = giay; i >= 0; i--)
            {
                cout  << setw(2) << setfill('0') << phut << ":" << setw(2) << setfill('0')<< i << endl;
                if(i == 0)
                    {
                        phut --;
                        giay = 59;
                    }
            }
    }

    while(!phut && giay)
    {
        for(giay; giay >= 0; giay--)
            {
                if(giay != 5 && giay != 4 && giay != 3 && giay != 2 && giay != 1  && giay != 0)
                    cout << setw(2) << setfill('0') << phut << ":" << setw(2) << setfill('0')<< giay << endl;
                else if(giay != 0)
                    cout << setw(2) << setfill('0') << phut << ":" << setw(2) << setfill('0')<< giay << " Tich tac" << endl;
                else 
                    cout << setw(2) << setfill('0') << phut << ":" << setw(2) << setfill('0')<< giay << " Reng reng reng" << endl;
            }

    }
    return 0;
}