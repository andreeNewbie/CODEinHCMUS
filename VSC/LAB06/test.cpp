#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
  string content = "Phan Nhut Anh";

  int a = content.rfind(' ');
  cout << a;
  return 0;
}
