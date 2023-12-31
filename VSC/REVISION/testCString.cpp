#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    string a = "Phan Nhut Anh";

    char b[100]; 

    strcpy(b, a.c_str());

    cout << strlen(b);

    return 0;
}