#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                a[i][j] = '*';
            else a[i][j] = ' ';
        }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}