#include<iostream>
#include<fstream>

using namespace std;

int soDoi(int num)
{
    int max;
    ifstream fin("input.txt");
    fin >> max;
    fin.close();

    int xoay = max / 2;
    int x[xoay];
    int y[xoay];
    x[0] = 0;
    y[0] = max - 1;

    for (int i = 1; i < xoay; i++)
    {
        x[i] = x[i - 1]++;
        y[i] = y[i - 1]--;
    }

    for (int i = 0; i < xoay; i++)
    {
        if (num == x[i]) return y[i];
        if (num == y[i]) return x[i];
    }
    
    return num;
}
void xoay90Do(int a[][100], int max)
{
    int mangPhu[100][100];

    for (int i = 0; i < max; i++)
        for (int j = 0; j < max; j++)
            mangPhu[i][j] = a[soDoi(j)][i];

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
                cout << mangPhu[i][j] << " ";
        cout << endl;
    }
        
}

void xoay180Do(int a[][100], int max)
{
    int mangPhu[100][100];

    for (int i = 0; i < max; i++)
        for (int j = 0; j < max; j++)
                mangPhu[i][j] = a[soDoi(i)][soDoi(j)];

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
                cout << mangPhu[i][j] << " ";
        cout << endl;
    }
}
 
void xoay1Lan(int a[][100], int max)
{
    int xoay = max / 2;
    int mangPhu[100][100];

    int x[xoay];
    int y[xoay];

    x[0] = 0;
    y[0] = max - 1;

    for (int i = 1; i < xoay; i++)
    {
        x[i] = x[i - 1]+ 1;
        y[i] = y[i - 1]- 1;
    }
    cout << "x0 " << x[0] << endl << "y0 " << y[0] << endl;

    mangPhu[max / 2][max / 2] = a[max / 2][max / 2];
    for (int i = 0; i < xoay; i++)
    {   
        for (int k = i + 1; k < (max - i); k++)
        {
            mangPhu[x[i]][k] = a[x[i]][k - 1];
            mangPhu[k][y[i]] = a[k - 1][y[i]];
        }

        for (int h = i; h < (max - i - 1); h++)
        {
            mangPhu[h][x[i]] = a[h + 1][x[i]];
            mangPhu[y[i]][h] = a[y[i]][h + 1];
        }
    }

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
                cout << mangPhu[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int n;

    ifstream fin("input.txt");

    fin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> a[i][j];

    fin.close();
    
    cout << "Mang sau khi xoay 90 do la: \n";
    xoay90Do(a, n);
    cout << endl;

    cout << "Mang sau khi xoay 180 do la: \n";
    xoay180Do(a, n);
    cout << endl;

    cout << "Mang sau khi xoay 1 lan la: \n";
    xoay1Lan(a, n);
    cout << endl;

    return 0;
}
