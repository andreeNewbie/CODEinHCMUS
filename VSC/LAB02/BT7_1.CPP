#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
    {
        cout << "So lon nhat la " << num1 << endl;
        if(num2>num3)
        {
            cout << "So nho nhat la " << num3 << endl ;
            cout << "Tu nho den lon la " << num3 << " " << num2 << " " << num1;
        }
        else
        {
            cout << "So nho nhat la " << num2 << endl ;
            cout << "Tu nho den lon la " << num2 << " " << num3 << " " << num1 << endl;
        }
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout << "So lon nhat la " << num2 << endl;
        if(num1>num3)
        {
            cout << "So nho nhat la " << num3 << endl ;
            cout << "Tu nho den lon la " << num3 << " " << num1 << " " << num2;
        }
        else
        {
            cout << "So nho nhat la " << num1 << endl ;
            cout << "Tu nho den lon la " << num1 << " " << num3 << " " << num2;
        }
    }
    else if(num3 > num1 && num3 > num2)
    {
        cout << "So lon nhat la " << num3 << endl;
        if(num2>num1)
        {
            cout << "So nho nhat la " << num1 << endl ;
            cout << "Tu nho den lon la " << num1 << " " << num2 << " " << num3;
        }
        else
        {
            cout << "So nho nhat la " << num2 << endl ;
            cout << "Tu nho den lon la " << num2 << " " << num1 << " " << num3;
        }
    }
    return 0;
}