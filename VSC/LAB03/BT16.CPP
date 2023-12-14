#include<iostream>
using namespace std;

void nhapSo();
void cong(int, int);
void tru(int, int);
void nhan(int, int);
void chia(int, int);

int main()
{
    int choose = 10, num1, num2; 
    while(choose)
    {
    nhapSo();

    cin >> choose;
    cout << endl;

    if(choose == 0)
    {
        cout << "Ban da ket thuc chuong trinh!";
        return 0;
    }

    cout << "Moi ban nhap so thu nhat: ";
    cin >> num1;

    cout << "Moi nhap nhap so thu hai: ";
    cin >> num2;

    switch(choose)
    {
        case 1:
            cong(num1, num2);
            break;
        case 2:
            tru(num1, num2);
            break;
        case 3:
            nhan(num1, num2);
            break;
        case 4:
            chia(num1, num2);
            break;
    }
    
    cout << endl;
    cout << "------------------" << endl;
    } 
    return 0;
}

void nhapSo()
{
    cout << "MAY TINH DON GIAN \n";
    cout << "1. Cong\n";
    cout << "2. Tru\n";
    cout << "3. Nhan\n";
    cout << "4. Chia\n";
    cout << "0. Ket thuc chuong trinh\n" << endl;
    
    cout << "Lua chon cua ban la: " ;
}

void cong(int num1, int num2)
{
    int result = num1 + num2;
    cout << "Ket qua: " << num1 << " + " << num2 << " = " << result;
}

void tru(int num1, int num2)
{
    int result = num1 - num2;
    cout << "Ket qua: " << num1 << " - " << num2 << " = " << result;
}

void nhan(int num1, int num2)
{
    int result = num1 * num2;
    cout << "Ket qua: " << num1 << " * " << num2 << " = " << result;
}

void chia(int num1, int num2)
{
    double result = 1.0 * num1 / num2;
    cout << "Ket qua: " << num1 << " / " << num2 << " = " << result;
}
