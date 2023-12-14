#include<iostream>
using namespace std;

int main()
{
    double chieuCao, min, max;
    bool flag = true;

    cout << "Nhap vao chieu cao: ";
    cin >> chieuCao;

    while (chieuCao)
    {
        if(flag)
        {
            min = chieuCao;
            max = chieuCao;
            flag = false;
        }
        else
        {
            if(chieuCao > max)
                max = chieuCao;
            if(chieuCao < min)
                min = chieuCao;
        }

        cout << "Nhap vao chieu cao: ";
        cin >> chieuCao;
    }
    cout << "Chieu cao cua hoc sinh dung dau danh sach: " << min << endl;
    cout << "Chieu cao cua hoc sinh dung cuoi danh sach: " << max << endl;

    return 0;
}
