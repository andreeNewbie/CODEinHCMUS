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

long long findTriangleNumberHasNDivision(int n)
{
    long long number = 0;
    int check, x = 0;
    bool flag = false;

    while (!flag)
    {
        number = getTriangleNumber(x++, number);
        check = countDivision(number);
        if (check >= n) flag = true;
    }

    return number;
}

void printDivision(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) cout << i << " ";
    }
}

int main()
{
    int number;
    cout << "Hay nhap so uoc ";
    cin >> number;

    int check = findTriangleNumberHasNDivision(number);

    cout << "Uoc cua " << number << " la: ";
    printDivision(check);

    cout << endl << "So co " << number << " uoc dau tien la " << check << endl;

    return 0;
}