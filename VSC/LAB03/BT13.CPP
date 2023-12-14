#include<iostream>
using namespace std;
int main()
{
    double danSoA, danSoB;
    double tangTruongA, tangTruongB;

    cout << "Hay nhap dan so A" << endl;
    cin >> danSoA;
    cout << "Hay nhap muc do tang cua qua quoc gia A" << endl;
    cin >> tangTruongA;
    tangTruongA /= 100;
    cout << "Hay nhap dan so B" << endl;
    cin >> danSoB;
    cout << "Hay nhap muc do tang cua qua quoc gia B" << endl;
    cin >> tangTruongB;
    tangTruongB /= 100;

    if (danSoA >= danSoB || tangTruongA <= tangTruongB)
    {
        cout << "Hay nhap Dan so A be hon Dan so B va muc do tang truong cua B thi lon hon B";
        return 0;
    }
    else
    {
        int i;
        for(i = 1; i <= 1000; i++)
        {
           danSoA *= 1 + tangTruongA;
           danSoB *= 1 + tangTruongB;
           if (danSoA >= danSoB)
           {
            cout << "Can toi thieu " << i << " nam de A vuot qua B"  << endl;
            break;
           }
        }
        
    }
    cout << "Khi do dan so cua a la " << danSoA << endl <<"Dan so cua B la " << danSoB << endl;
    return 0;
}