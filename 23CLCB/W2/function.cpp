#include "function.h"

bool chinhPhuong (int i)
{
    if ((int)sqrt(i) * (int)sqrt(i) == i)
        return true;
    else

        return false;
}

double ln2(int n)
{
    double result = 0;

    for(int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            result += 1.0 / i;
        else  
            result -= 1.0 / i;
    }

    return result;
}

long sum(int n)
{
    long result = 0;
    for (int i = 1; i <= n; i++)
        if (chinhPhuong(i))
            result += i;
    return result;
}

bool soDacBiet(int n)
{
    int a = n % 10;
    n /= 10;

    int b = n % 10;
    n /= 10;

    int c = n;

    if (a + c == b)
        return true;
    else 
        return false;
}

void countSoDacBiet()
{
    int count = 0;

    for (int i = 100; i < 1000; i++)
    {
        if (soDacBiet(i))
        {
            cout << i << endl;
            count++;
        }
    }

    cout << "Co " << count << " so dac biet";
}

void findMinMax(int n, int &min, int &max)
{
    if (n < min) min = n;
    if (n > max) max = n;
}

void soDaoNguoc(int n)
{
    if (n == 0) 
    {
        cout << 0;
        return;
    }

    while (n)
    {
        cout << n % 10;
        n /= 10;
    }
}

bool isItOdd(int n)
{
    if (n == 0) return false;
    while (n)
    {
        if (n % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}