#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int insertDoubleSpaced(char input[])
{
    ifstream fin(input);

    string content;

    while(getline(fin, content))
        cout << content.substr(2) << "\n";

    return 0;
}

int main()
{
    char a[]= "input.txt";

    int insert = insertDoubleSpaced(a);

    return 0;
}