#include<iostream>
#include<fstream>

using namespace std;

bool checkPrime(int x)
{
    int dem = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0) dem++;
    if (dem == 2) return true;
    else return false;
}

int countPrimes(char input[])
{
    ifstream fin(input);

    string content;

    while (getline(fin, content))
    {
        int number = stoi(content);
        if (checkPrime(number)) cout << number << endl;
    }
    return 0;
}

bool findNumber(int x)
{
    int sum = 0;
    while (x != 0)
    {
        int a = x % 10;
        sum += a;
        x /= 10;
    }

    if (sum % 2 == 0) return true;
    else return false;
}

int writeListOddNumbers(int n, char output[])
{
    ofstream fout(output);

    int a[100];
    int index = 0;
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            a[index++] = i;

    for (int i = 0; i < index; i++)
        if(findNumber(a[i]))
            fout << a[i] << endl;

    fout.close();
    int prime = countPrimes(output);
    return 0;
}

int main()
{
    char a[] = "output.txt";
    int n;

    cout << "Nhap n: ";
    cin >> n;

    int result = writeListOddNumbers(n, a);
    return 0;
}