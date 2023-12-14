#include<iostream>
using namespace std;

int main()
{ 
    double x,y,t;
    cout << "Duong di hoc cua Tuan dai bao nhieu km? ";
    cin >> y;
    cout << "Tuan di voi van toc bao nhieu km/h ";
    cin >> x;
    t = y / x;
    if (t>1)
    {
        cout << "Thoi gian Tuan di hoc la " << t << " gio";
        return 0;
    
    }
    else
    {
       cout << "Thoi gian Tuan di hoc la " << t * 60 << " phut";
       return 0;
    }
    return 0;


}