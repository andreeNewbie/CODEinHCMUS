#include<iostream>

using namespace std;

long long getTriangleNumber(int n, int total)
{
    return total + n;
}

int countDivision(int x)
{
    int count = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            count ++;
    }

    return count;
}

int findTriangleNumberHasNDivision(int n)
{
    long long number = 0;
    int check, x = 0;
    bool flag = false;

    while (!flag)
    {
        number = getTriangleNumber(x++, number);
        check = countDivision(number);
        if (check == n) flag = true;
    }

    return number;
}

int main()
{
    int number;
    cout << "Hay nhap so uoc ";
    cin >> number;

    cout << "So co " << number << " uoc dau tien la " << findTriangleNumberHasNDivision(number) << endl;

    return 0;
}