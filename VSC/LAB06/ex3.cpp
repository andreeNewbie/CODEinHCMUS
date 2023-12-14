#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int countAverageChar(char input[])
{
    ifstream fin(input);
    string content;

    int totalChar = 0;
    int line = 0;

    while (getline(fin, content))
    {
        totalChar += content.length();
        line++;
    }

   return totalChar / line;
}

int main()
{
    const int MAX = 100;

    char a[MAX] = "input.txt";
    char b[MAX] = "output.txt";

    int check = countAverageChar(a);
    
    cout << check;

    return 0;
}