#include<iostream>
using namespace std;

void hoanVi(int &); 

int main()
{
    int num, chan = 0, le = 0;
    cout << "Hay nhap vao mot so nguyen duong ";
    cin >> num;
    while(num)
    {
        if(num % 2 == 0 || num == 0)
            chan++;
        else
            le++;
        hoanVi(num); 
    }
    cout << endl;
    cout << "So luong so chan la " << chan << endl;
    cout << "So luong so le le " << le << endl;
    return 0;
}

void hoanVi(int &num)
{
    int DV;
    DV = num % 10;
    cout << DV;
    num = (num - DV) / 10;
}