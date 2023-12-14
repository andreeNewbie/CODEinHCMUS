#include<iostream>
using namespace std;
int main()
{
   int n, soNguyenTo;
   cin >> n;
   while( n <= 0 && n >= 50) 
   {
        cout << "Hay nhap so nguyen n khac voi 0 < n < 50\n";
        cin >> n;
   } 
   for(int i = 1; i <= n; i++)
   {
     int dem = 0;
     for(int j = 1; j <= i; j++)
     {
          if(i % j == 0)
               dem++;
     }
     if(dem == 2)
          soNguyenTo = i;
   }
   cout << soNguyenTo;
   return 0;
}