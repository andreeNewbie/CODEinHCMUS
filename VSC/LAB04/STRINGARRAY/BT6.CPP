#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char soNguyen[100];
    cin.getline(soNguyen, 100);
    int n = strlen(soNguyen);
    
    int count = 0;

    string newNumber = "";

    for (int i = n - 1; i >= 0; i--)
    {
        count++;
        newNumber = soNguyen[i] + newNumber;
        if (count % 3 == 0 && i != 0)
            newNumber = "," + newNumber;
    }

    for (auto num : newNumber)
        cout << num;

    return 0;
}