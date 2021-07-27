#include "Xe.h"

void Xe::nhapThongTin()
{
    cout << "\nNhap ho ten nguoi thue: ";
    fflush(stdin);
    getline(cin, hoTenNguoiThue);
    cout << "\nNhap so gio thue: ";
    cin >> soGioThue;
}
void Xe::xuatThongTin()
{
    cout << "\nHo ten nguoi thue: " << hoTenNguoiThue;
    cout << "\nSo gio thue: " << soGioThue;
}

// Xe dap
float XeDap::tinhTienThueXe()
{
    return 10000 + (soGioThue - 1) * 8000;
}

// Xe may
void XeMay::nhapThongTin()
{
    Xe::nhapThongTin();
    do
    {
        cout << "\nNhap loai xe can thue(100 || 250 phan khoi): ";
        cin >> loaiXe;
        if (loaiXe != 100 && loaiXe != 250)
            cout << "\n\tLoai xe khong hop le. Vui long nhap lai";
    } while (loaiXe != 100 && loaiXe != 250);
    cout << "\nNhap bien so xe: ";
    fflush(stdin);
    getline(cin, bienSo);
}

void XeMay::xuatThongTin()
{
    Xe::xuatThongTin();
    cout << "\nLoai xe: " << loaiXe;
    cout << "\nBien so xe: " << bienSo;
}

float XeMay::tinhTienThueXe()
{
    if (loaiXe == 100)
    {
        return 150000 + 100000 * (soGioThue - 1);
    }
    return 200000 + 100000 * (soGioThue - 1);
}

int XeMay::get_loaiXe()
{
    return loaiXe;
}

void XeMay::set_loaiXe(int loaiXe){
    this->loaiXe = loaiXe;
}