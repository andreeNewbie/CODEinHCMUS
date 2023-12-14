#include<iostream>
using namespace std;

void setArray(int, int);

int main()
{
    int n;
    cout << "Hay nhap n phan tu cua mang a vao day: ";
    cin >> n;

    int a[n];

    setArray(a, n);

    return 0;
}

void setArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hay nhap gia tri phan tu a[" << i <<"]: ";
        cin >> a[i];
    }

}
