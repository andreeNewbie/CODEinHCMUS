#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float BMI,W,H;

    cout << "Hay nhap can nang W: (don vi kg) " << endl;
    cin >> W;
    cout << "Hay nhap chieu cao H: (don vi met) " << endl;
    cin >> H;

    BMI = W / pow(H,2);
    cout << "Chi so BMI cua ban la " << BMI << endl;

    return 0;
}