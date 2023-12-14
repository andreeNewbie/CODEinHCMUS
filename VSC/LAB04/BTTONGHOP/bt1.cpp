#include<iostream>
#include<cstring>
#include<string>
#include <iomanip>

using namespace std;

void nhapThongTin(string name[1000], int vote[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten ung vien thu " << (i + 1) << " : ";
        cin >> name[100];
        cout << "Nhap so luong phieu ung vien thu " << (i + 1) << " nhan duoc: ";
        cin >> vote[i];
    }
}

int tinhPhanTram(int vote[1000], double percent[100], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += vote[i];
    }
    for (int i = 0; i < n; i++)
        percent[i] = 1.0 * vote[i] / total * 100;
    return total;
}

int main()
{
    int candidate;
    cout << "Hay nhap so luong ung vien: ";
    cin >> candidate;

    string* ten[100];
    int phieu[1000];
    nhapThongTin(ten, phieu, candidate);

    double percent[candidate];
    int total = tinhPhanTram(phieu, percent, candidate);

    cout << "Candidate \t" << "Vote \t" << "Received '%' of Total Votes\n";
    for (int i = 0; i < candidate; i++)
    {
        cout << setw(9) << left << setfill(' ') << ten[i] << " \t";
        cout << setw(5) << left << setfill(' ') << phieu[i] << " \t";
        cout << setw(24) << left << setfill(' ') << percent[i] << " \n";
    }

    cout << "Total\t" <<  total;

    return 0;
}