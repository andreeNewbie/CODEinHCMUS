#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double r, s, p;
    cout << "hay nhap ban kinh hinh tron \n ";
    cin >> r;
    if (r <= 0)
    {
        cout << "Ban kinh phai > 0, ban hay nhap lai: ";
        cin >> r;
        s = M_PI*pow(r,2);
        p = 2*M_PI*r;

        cout << "Dien tich hinh tron co ban kinh " << r << " " << "la " << s << "\n ";
        cout << "Chu vi hinh tron co ban kinh " << r << " " << "la" << p << "\n ";

        return 0;

    }
    else
    {
    s = M_PI*pow(r,2);
    p = 2*M_PI*r;

    cout << "Dien tich hinh tron co ban kinh " << r << " "  << "la " << s << "\n ";
    cout << "Chu vi hinh tron co ban kinh " << r << " " << "la " << p << "\n ";

    return 0;
    }

}