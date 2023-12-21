#include<iostream>
#include<fstream>

using namespace std;

struct Point
{
    int x;
    int y;
};

void nhapHam(int x[][100])
{
    ifstream fin("input.txt");
    int m = 5, n = 5;
    for (int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            fin >> x[i][j];
}

bool case1(int x[][100], int a, Point pos)
{
    int total = 0;
    for(int i = pos.x; i < 5; i++)
    {
        total += x[pos.y][i];
        if (total == a) return true;
        total *= 10;
    }
    return false;
}

bool case2(int x[][100], int a, Point pos)
{
    int total = 0;
    for(int i = pos.y; i < 5; i++)
    {
        total += x[i][pos.x];
        if (total == a) return true;
        total *= 10;
    }
    return false;
}

bool case3(int x[][100], int a, Point pos)
{
    int total = 0;

    int i = pos.x;
    int j = pos.y;

    while (i < 5 && j < 5)
    {
        total += x[j++][i++];
        if (total == a) return true;
        total *= 10;
    }

    return false;
}

bool check(int x[][100], int a, Point pos)
{
    if (case1(x, a, pos) || case2(x, a, pos) || case3(x, a, pos)) return true;
    else return false;
}

int main()
{
    int arr[100][100];
    nhapHam(arr);

    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    int a;
    cout << "Nhap so a: ";
    cin >> a;

    Point pos;
    cout << "Nhap vi tri bat dau cua diem a: ";
    cin >> pos.x >> pos.y;

    if (check(arr, a, pos)) cout << "true";
    else cout << "false";

    return 0;
}