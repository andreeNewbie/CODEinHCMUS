#include<iostream>

using namespace std;

int findMin(int a[])
{
    int n = 10;

    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    return min;
}

int sortNum(int a[])
{
    int n = 14;
    for (int i = 0; i < n; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_pos])
                min_pos = j;
        }
        swap(a[i], a[min_pos]);
    }
}

int main()
{
    int a[] = {11, 1, 3, 2, 4, 6, 5, 7, 9, 8, 12, 16, 13};

    int check = sortNum(a);

    for (auto x : a)
        cout << x << " ";

    return 0;
}