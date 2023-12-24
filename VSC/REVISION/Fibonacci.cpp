#include<iostream>
#include<string>

using namespace std;

int fabonacci(int n)
{
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    else return fabonacci(n - 1) + fabonacci(n - 2);
}

bool check(int x)
{
    long a;
    int k = 0;
    while (a != x)
    {
        a = fabonacci(k++);
        if (a == x) return true;
        else if (a > x) return false;
    }
}

int main()
{
    int num;
    cin >> num;
    
    if (check(num)) cout << "Day la so nam trong day fabonacci";
    else cout << "Day khong phai la so nam trong day fabonacci";
    
    return 0;
}