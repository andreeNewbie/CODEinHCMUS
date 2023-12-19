#include<iostream>

using namespace std;

int sum(int a[], int b[], int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
        if (b[i] == 1) 
            total += a[i];
    return total;
}

void print(int a[], int b[], int n)
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1) cout << a[i] << " ";
    }
    cout << " ]" << endl;
}

void find(int a[], int b[], int pos, int n)
{
    if(pos == n)
    {
        if(sum(a, b, n) == 0) 
            print(a, b, n);
        return;
    }

    b[pos] = 0;
    find(a, b, pos + 1, n);

    b[pos] = 1;
    find(a, b, pos + 1, n);
}

int main()
{
    int a[] = {1, 2, 3, 5, 6, -7, -8, -9, 0, 11};

    int n = 10;

    int b[n];

    find (a, b, 0, n);
  
    return 0;
}


