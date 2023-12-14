#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double W, H, BMI;

    cout << "Nhap can nang: " << endl;
    cin >> W;
    cout << "Nhap chieu cao: " << endl;
    cin >> H;

    cout << endl;

    BMI = W / pow(H,2);
    cout << "Chi so BMI la " << BMI << endl;

    if(BMI < 18.5)
        cout << "Duoi chuan" << endl;
    else if(BMI >= 18.5 && BMI < 25)
        cout << "Chuan " << endl;
    else if(BMI >= 25 && BMI < 30)
        cout << "Thua can " << endl;
    else if(BMI >= 30 && BMI < 40)
        cout << "Beo - nen giam can" << endl;
    else if(BMI >= 40)
        cout << "Rat beo - Can giam can ngay " << endl;

    return 0;
}