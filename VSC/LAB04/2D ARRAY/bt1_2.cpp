#include<iostream>

using namespace std;

void set2dArray(int [][100], int &, int &);
void print2dArray(int a[][100], int, int);


int main()
{
    int row, column;
    
    cout << "Nhap so dong: ";
    cin >> row;

    cout << "Nhap so cot: ";
    cin >> column;

    int a[row][100];

    set2dArray(a, row, column);
    print2dArray(a, row, column);

    return 0;
}


void set2dArray(int a[][100], int &row, int &column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {    
            cout << "Nhap gia tri cua phan tu a(" << i << ", " << j << "): ";
            cin >> a[i][j];
        }
    }
}

void print2dArray(int a[][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "\t";
            
        cout << "\n";
    }
}