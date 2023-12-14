#include<iostream>

using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

PhanSo sumPS(int tuSo1, int mauSo1, int tuSo2, int mauSo2)
{
    PhanSo result;
    
    cout << "Ket qua la: ";
    if (mauSo1 % mauSo2 == 0)
    {
        result.tu = tuSo2 * (mauSo1 / mauSo2) + tuSo1;
        result.mau = mauSo1;
    }
    else if (mauSo2 % mauSo1 == 0)
    {
        result.tu = tuSo1 * (mauSo2 / mauSo1) + tuSo2;
        result.mau = mauSo2;
    }
    else
    {
        result.tu = tuSo1 * mauSo2 + tuSo2 * mauSo1;
        result.mau = mauSo1 * mauSo2;
    }

    return result;
}

void print(PhanSo a)
{
    if (a.tu % a.mau == 0)
        cout << a.tu / a.mau;
    else if (a.mau % a.tu == 0)
        cout << 1 << " / " << a.mau / a.tu;
    else
    {
        for (int i = a.tu * a.mau; i >= 2; i--)
            if (a.tu % i == 0 && a.mau % i == 0)
            {
                cout << a.tu / i << " / " << a.mau / i;
                exit(0);
            }
    }
}

int main()
{
    PhanSo input1, input2, output;

    cout << "Hay nhap 2 so dang a b voi a/b cua phan so 1 : ";
    cin >> input1.tu >> input1.mau;

    if(input1.mau == 0 || input1.tu < 0 || input1.mau < 0)
    {
        cout << "ERROR !!!";
        return 0;
    }

    cout << "Hay nhap 2 so dang a b voi a/b cua phan so 2 : ";
    cin >> input2.tu >> input2.mau;

    if(input2.mau == 0 || input2.tu < 0 || input2.mau < 0)
    {
        cout << "ERROR !!!";
        return 0;
    }

    output = sumPS(input1.tu, input1.mau, input2.tu, input2.mau);
    print(output);
    return 0;
}