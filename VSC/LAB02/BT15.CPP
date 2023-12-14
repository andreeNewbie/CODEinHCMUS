#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    float result;
    char toanTu;
    cin >> num1 >> num2 >> toanTu;

    switch (toanTu)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;

    }
    cout << result;
    return 0;
}