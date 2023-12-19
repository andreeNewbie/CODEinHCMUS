#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    string a ("Helo......");

    a.erase(a.begin()+3);
    cout << a;

    return 0;
}