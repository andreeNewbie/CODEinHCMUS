#include<iostream>
#include<iomanip>

using namespace std;

struct PS
{
    int tu;
    int mau;
};

void toiGian(PS x)
{
    cout << "\nPhan so be nhat sau khi toi gian la: ";
    // if(x.mau % x.tu == 0)
    //     cout << 1 << " / " << x.mau / x.tu;
    if(x.tu % x.mau == 0)
        cout << x.tu / x.mau;
    else for (int i = x.mau * x.tu; i >= 1; i--)
        if (x.tu % i == 0 && x.mau % i == 0){
            cout << x.tu / i << " / " << x.mau / i;
            break;
        }
    cout << "\nVa gia tri cua no bang: " << 1.0 * x.tu / x.mau;
}

void findMin(PS a[], int n)
{
    double min = 1.0 * a[0].tu / a[0].mau;
    int mark = 0;
    for (int i = 1; i < n; i++)
    {
        double check = 1.0 * a[i].tu / a[i].mau;
        if(check < min)
            mark = i;
    }
    cout << "Phan so be nhat la: " << a[mark].tu << " / " << a[mark].mau;
    toiGian(a[mark]);
    cout << "\nTrong khi cac phan so kia lan luot co gia tri la: \n";
    for (int i = 0; i < n; i++)
    {
        if (i == mark)
            continue;
        cout << fixed << setprecision(2) << 1.0 * a[i].tu / a[i].mau << " ";
    }
}

int main()
{
    PS a[100];

    int count = 0;

    for (int i = 0; i <= 100; i++)
    {
        cout << "Nhap Tu va Mau cua phan so thu " << (i + 1) << " (enter 0 0 to stop) : ";
        cin >> a[i].tu >> a[i].mau;
        if (a[i].mau == 0)
            break;
        count++;
    }

    findMin(a, count);
    return 0;
}