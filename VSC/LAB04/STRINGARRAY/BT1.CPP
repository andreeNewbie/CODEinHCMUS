#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[100];
     
    cout << "Hay nhap mang ky tu a: ";
    cin.getline(a, 100);

    int index = strlen(a);

    for (int i = (index - 1); i >= 0; i--)
        cout << a[i];
    
    return 0;
}