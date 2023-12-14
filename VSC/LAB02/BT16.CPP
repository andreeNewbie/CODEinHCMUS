#include<iostream>
using namespace std;
int main()
{
    char type;
    int min, soDu;
    cin >> type >> min >> soDu;
    switch(type)
    {
        case 't':
            if(soDu < min)
            {
                cout << "Ban phai nop phi dich vu $10" << endl;
            }
            else
            {
                cout << "Ban nhan duoc lai suat $" << 0.04 *  soDu << endl;
            }
            break;
        case 'v':
            if(soDu < min)
            {
                cout << "Ban phai nop phi dich vu $25" << endl;
            }
            else
            {
                if(soDu - min >= 5000)
                {
                    cout << "Ban nhan duoc lai suat $" << 0.03 * soDu << endl;
                }
                else
                {
                    cout << "Ban nhan duoc lai suat $" << 0.05 * soDu << endl;
                }
            }
            break;
    }
    return 0;
}