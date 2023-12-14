#include<iostream>
using namespace std;

void setArray(int [], int);
void printArray(int [], int);
int sumArray(int [], int);
int findMin(int [], int);
bool checkPrime(int);
int countNumberOfPrime(int [], int);

int main()
{
    int n;
    cout << "Hay nhap n phan tu cua mang a vao day: ";
    cin >> n;

    int a[n];

    cout << "\n--- YEU CAU 1 ---" << endl;
    setArray(a, n);

    cout << "\n--- YEU CAU 2 ---" << endl;
    printArray(a, n);

    cout << "\n--- YEU CAU 3 ---" << endl;
    int SUM = sumArray(a, n);
    cout << "Tong tat ca cac chu so cua mang a co " << n << " phan tu la: " << SUM << endl;

    cout << "\n--- YEU CAU 4 ---" << endl;
    int MIN = findMin(a, n);
    cout << "Gia tri nho nhat cua day so vua nhap vao la " << MIN << endl;

    cout << "\n--- YEU CAU 5 ---" << endl;
    int soNguyenTo = countNumberOfPrime(a, n);
    cout << "Day so vua nhap co " << soNguyenTo << " so nguyen to" << endl;


    return 0;
}

void setArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri cua phan tu thu " << (i + 1) << ": ";
        cin >> a[i];
    }

}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "Gia tri cua phan tu thu " << (i + 1) << "la: " << a[i] << endl;
}

int sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int findMin(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
            min = a[i];
    }
    return min;
}

bool checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int countNumberOfPrime(int a[], int n)
{
    int count = 0;
    for (int i = 0;i < n; i++)
    {
        if(checkPrime(a[i]))
            count++;
    }
    return count;
} 