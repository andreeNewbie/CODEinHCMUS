#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

struct SinhVien
{
    int id;
    string name;
    double toan;
    double li;
    double hoa;
};

void findMin(SinhVien sv[], double tbm[], int num)
{
    double minValue = tbm[0];

    for (int i = 1; i < num; i++)
        if (tbm[i] < minValue)
            minValue = tbm[i]; 

    for (int i = 0; i < num; i++)
        if (minValue == tbm[i])
            cout << fixed << setprecision(2) << "\nSinh vien co diem trung binh be nhat la: "
            << sv[i].name << " co MSSV " << sv[i].id << " voi " << minValue << " diem.";
}

void findMax(SinhVien sv[], double tbm[], int num)
{
    double maxValue = tbm[0];

    for (int i = 1; i < num; i++)
        if (tbm[i] > maxValue)
            maxValue = tbm[i];

    for (int i = 0; i < num; i++)
        if (tbm[i] == maxValue)
            cout << "\nSinh vien co diem trung binh lon nhat la: "
            << sv[i].name << " co MSSV " << sv[i].id << " voi " << maxValue << " diem.";
}

void evr(SinhVien a[100], int num)
{
    double tbm[num];
    for (int i = 0; i < num; i++)
    {
        tbm[i] = (a[i].toan + a[i].li + a[i].hoa) / 3;
    }
    findMin(a, tbm, num);
    findMax(a, tbm, num);
}


int main()
{
    ifstream fin("text.txt");
    const int MAX = 100;

    int numSV;
    //cout << "Hay nhap so luong sinh vien: ";
    fin >> numSV;

    SinhVien sv[MAX];
    for (int i = 0; i < numSV; i++)
    {
        //cout << "Hay nhap ho va ten sinh vien thu " << (i + 1) << " : ";
        fin.ignore();
        getline(fin, sv[i].name);

        //cout << "Hay nhap MSSV cua sinh vien " << sv[i].name << " : ";
        fin >> sv[i].id;

        //cout << "Nhap diem Toan, Li, Hoa : ";
        fin >> sv[i].toan >> sv[i].li >> sv[i].hoa;
    }
    fin.close();

    evr(sv, numSV);
    
    return 0;
}
