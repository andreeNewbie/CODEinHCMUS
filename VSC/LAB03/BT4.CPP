#include<iostream>
using namespace std;
int main()
{
    int n, tong = 0, thuTu = 0;
    cout << "Nhap so nguyen duong n\n";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << "Uoc thu " << ++thuTu << " la " << i << endl;
            tong += i;
        }
    }
    cout <<"So " << n << " co " << thuTu << " uoc" 
    << " va tong cac uoc la " << tong;
    return 0;
}