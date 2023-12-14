#include<iostream>
using namespace std;

int main()
{
    int SoChaiNuoc, DonGia, TongTien, TienThua, TienKhach, MuoiDong, NamDong, HaiDong, MotDong;

    cout << "Ban mua bao nhieu chai nuoc? ";
    cin >> SoChaiNuoc;
    cout << "\nMay ghi nhan ban mua " << SoChaiNuoc << " chai nuoc \n"; 
    cout << "\nDon gia moi chai la bao nhieu? ";
    cin >> DonGia;
    cout << "\nMAy xac nhan don gia " << DonGia << " / mot chai \n";
    
    TongTien = SoChaiNuoc * DonGia;
    cout << "Ban phai tra " << TongTien << "\n";
    cout << "\nBan hay nhap so tien ban tra: ";
    cin >> TienKhach;
    cout << "\n";

    TienThua = TienKhach - TongTien;

    if (TienThua < 0)
    {
        cout << "ban hay tra them " << TongTien - TienKhach << "\n";
        return 0;
    }
    else
    {
        MuoiDong = TienThua / 10;
        NamDong = (TienThua - 10 * MuoiDong) / 5;
        HaiDong = (TienThua - (10 * MuoiDong + 5 * NamDong )) / 2;
        MotDong = TienThua - (10 * MuoiDong + 5 * NamDong + 2 * HaiDong);
    }
   /* else
    {
        if (TienThua > 10 )
        {
            MuoiDong = TienThua / 10;
            NamDong = (TienThua - 10 * MuoiDong) / 5;
            HaiDong = (TienThua - (10 * MuoiDong + 5 * NamDong )) / 2;
            MotDong = TienThua - (10 * MuoiDong + 5 * NamDong + 2 * HaiDong);
        }
        if (TienThua < 10 && TienThua >5)
        {
            NamDong = (TienThua - 10 * MuoiDong) / 5;
            HaiDong = (TienThua - (10 * MuoiDong + 5 * NamDong )) / 2;
            MotDong = TienThua - (10 * MuoiDong + 5 * NamDong + 2 * HaiDong);
        }
        if (TienThua < 5)
        {
            HaiDong = (TienThua - (10 * MuoiDong + 5 * NamDong )) / 2;
            MotDong = TienThua - (10 * MuoiDong + 5 * NamDong + 2 * HaiDong);
        }
    } */
    cout << "Ban nhan lai " << MuoiDong << " to 10 dong \n";
    cout << "Ban nhan lai " << NamDong << " to 5 dong\n";
    cout << "Ban nhan lai " << HaiDong << " to 2 dong\n";
    cout << "Ban nhan lai " << MotDong << " to 1 dong\n"; 

    return 0;
}