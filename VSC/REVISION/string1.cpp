#include<iostream>
#include<string>

using namespace std;

string convert(string name)
{
    int a = name.find(' ');
    int b = name.rfind(' ');

    string lastName = name.substr(0, a);
    string firstName = name.substr(b + 1);

    return firstName + " " + lastName;
}

int main()
{
    string name;
    
    getline(cin, name);

    cout << convert(name);

    return 0;
}