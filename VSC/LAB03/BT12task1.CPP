#include<iostream>
using namespace std;
int main()
{
    int ga, cho;
    bool nghiem = true;
    for(ga = 0; ga <= 36; ga++)
    {
        cho = 36 - ga;
        if(ga * 2 + cho * 4 == 100)
        {
            cout << "So ga la " << ga << endl;
            cout << "So cho la " << cho << endl;
            nghiem = false;
            break;
        }
    }
    if(nghiem)
        cout << "Phuong trinh vo nghiem." << endl;
    return 0;
}