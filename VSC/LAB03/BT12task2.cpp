#include<iostream>
using namespace std;
int main()
{
    int trauDung, trauGia, trauNam, trauGN;
    bool nghiem = true;
    for(trauDung = 1; trauDung <= 100; trauDung++)
    {
        trauGN = 100 - trauDung; // trau gia + trau nam
        for(trauNam = 1; trauNam <= trauGN; trauNam++)
        {
            trauGia = trauGN - trauNam;
            if(trauDung * 5 + trauNam * 3 + 1.0 * trauGia / 3 == 100)
            {
                cout << trauDung << "\t" << trauNam << "\t" << trauGia << endl;
                nghiem = false;
                break;
            }
        }
    }
    if(nghiem)
       cout << "Khong co nghiem."; 
    return 0;
}