#include<iostream>

using namespace std;

long Padovan(long i)
{
    if ( i == 1 || i == 2 || i == 0)
        return 1;
    else
        return Padovan(i - 2) + Padovan(i - 3);
}

int main()
{   
    long i;
    cin >> i;

    long result = Padovan(i);
    
    cout << result;

    return 0;

}