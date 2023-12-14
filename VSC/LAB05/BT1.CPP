#include<iostream>
#include<iomanip>

using namespace std;

struct Time
{
    int hour;
    int minus;
    int seconds;
};

void inputTime(Time time[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap theo cu phap Gio:Phut:Giay cua thoi gian thu " << (i + 1) << ": ";
        cin >> time[i].hour >> time[i].minus >> time[i].seconds;
    }
}

Time calcTime(int h1, int m1, int s1, int h2, int m2, int s2)
{
    Time calc;
    int sumSecond1 = h1 * 3600 + m1 * 60 + s1;
    int sumSecond2 = h2 * 3600 + m2 * 60 + s2;
    int dif;
    if (sumSecond1 >= sumSecond2)
        dif = sumSecond1 - sumSecond2;
    else
        dif = sumSecond2 - sumSecond1;
    calc.hour = dif / 3600;
    calc.minus = (dif - calc.hour * 3600) / 60;
    calc.seconds = dif - calc.hour * 3600 - calc.minus * 60;

    return calc;
}

int main()
{
    Time a[2]; 
    inputTime(a, 2);
    Time output = calcTime(a[0].hour, a[0].minus, a[0].seconds,
                           a[1].hour, a[1].minus, a[1].seconds);
    cout << setw(2) << setfill('0') << output.hour << ":" << output.minus << ":" << output.seconds;
    return 0;
}