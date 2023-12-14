#include<iostream>
using namespace std;

int findMin(int [][256], int, int);
void set2dArray(int [][256], int, int);

int main()
{
    int a[256][256];
    int row, column;

    cout << "Hay nhap so dong cua mang: ";
    cin >> row;

    cout << "Hay nhap so cot cua mang: ";
    cin >> column;

    set2dArray(a, row, column);
    int MIN = findMin(a, row, column);

    cout << "Gia tri nho nhat cua mang la " << MIN;
    return 0;
}


void set2dArray(int a[][256], int row, int column)
{
    for (int i = 0; i < row; i++)
        for (int k = 0; k < column; k++)
            {
                cout << "Nhap a[" << i << "][" << k << "]: ";
                cin >> a[i][k];
            }
}

int findMin(int a[][256], int row, int column)
{
    int min = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < column; k++)
            {
                if (a[i][k] < min)
                    min = a[i][k];
            }
    }
    return min;
}