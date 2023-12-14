#include<iostream>
using namespace std;

int GiaiThua(int);
int soMuX(int , int);
int nePo(int);

int main()
{
    int x, n, NePo, soMu, giaiThua;
    double S = 1;

    cout << "Hay nhap x\t";
    cin >> x;
    cout << "Hay nhap n\t";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        NePo = nePo(i);
        soMu = soMuX(x, i);
        giaiThua = GiaiThua(i);
        S += 1.0 * NePo * soMu / giaiThua;
    }
    cout << S;
    return 0;
    
}

int GiaiThua(int n)
{
    int k = 2*n + 1;
    int GT = 1;
    for (int i = 1; i <= k; i++)
        GT *= i;
    return GT;
}

int soMuX(int x, int n)
{
    int k = 2*n + 1;
    int soMu = 1;
    for (int i = 1; i <= k; i++)
        soMu *= x;
    return soMu;
}

int nePo(int n)
{ 
    if (n % 2 == 0)
        return -1;
    else 
        return 1;
}
