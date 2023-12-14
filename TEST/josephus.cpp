#include<iostream>

using namespace std;

int josephus(int n, int k) 
{
   if(n > 1)
      return (josephus(n-1, k) + k - 1) % n + 1;
   else
      return 1;
}

int main()
{
   int a[100], n, k;

   cout << "Nhap n voi a[n] = {1,2,3,..,n}: " ;
   cin >> n;

   cout << "Nhap so k: ";
   cin >> k;

   int x = josephus(n, k);

   cout << x;
   
   return 0;
}