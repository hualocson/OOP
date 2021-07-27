#include "Xe.h"
void Menu(XeDap ds_xedap[], int n_xedap, XeMay ds_xemay[], int n_xemay);
void xuatTatCaThongTin(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m);
float tongTienThueXe(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m);

int main()
{
    XeDap ds_xedap[100];
    int n_xedap = 0;
    XeMay ds_xemay[100];
    int n_xemay = 0;
    Menu(ds_xedap, n_xedap, ds_xemay, n_xemay);
    cout << "\n\n";
    system("pause");
    return 0;
}

// Xuat tat ca thong tin thue xe
void xuatTatCaThongTin(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m)
{
    // Xuat danh sach xe dap
    cout << "\n\n\t\t Danh Sach Thue Xe Dap";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Thong tin thue xe dap thu " << i + 1;
        ds_xedap[i].xuatThongTin();
        cout << "\nSo tien thue: " << (size_t)ds_xedap[i].tinhTienThueXe();
    }

    // Xuat danh sach xe may
    cout << "\n\n\t\t Danh Sach Thue Xe May";
    for (int i = 0; i < m; i++)
    {
        cout << "\n\t Thong tin thue xe may thu " << i + 1;
        ds_xemay[i].xuatThongTin();
        cout << "\nSo tien thue: " << (size_t)ds_xemay[i].tinhTienThueXe();
    }
}
// Tinh tong tine thue xe
float tongTienThueXe(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ds_xedap[i].tinhTienThueXe();
    }
    for (int i = 0; i < m; i++)
    {

        sum += ds_xemay[i].tinhTienThueXe();
    }
    return sum;
}

// Menu quan li xe
void Menu(XeDap ds_xedap[], int n_xedap, XeMay ds_xemay[], int n_xemay)
{
    int luachon;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t ======= Quan Ly Xe =======";
        cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
        cout << "\n\t2. Xuat tat ca thong tin thue xe";
        cout << "\n\t3. Tinh tong so tien thue xe dap va xe may";
        cout << "\n\t4. Xuat thong tin thue xe dap";
        cout << "\n\t5. Tinh tong so tien cho thue xe may loai 250 phan khoi";
        cout << "\n\t0. Ket thuc";
        cout << "\n\t\t ========== END ==========";

        cout << "\n\tNhap lua chon: ";
        cin >> luachon;

        if (luachon < 0 || luachon > 5)
            cout << "\nLua chon khong hop le. Vui long nhap lai";
        else if (luachon == 1)
        {
            int chon;
            while (true)
            {
                system("cls");
                cout << "\n\t1. Thue xe dap";
                cout << "\n\t2. Thue xe may";
                cout << "\n\t0. Ket thuc";

                cout << "\n\tBan thue xe gi? ";
                cin >> chon;

                if (chon < 0 || chon > 2)
                    cout << "\nLua chon khong hop le. Vui long nhap lai";
                else if (chon == 1)
                {
                    XeDap x;
                    cout << "\n\n\t\tNhap thong tin thue xe dap\n";
                    x.nhapThongTin();
                    ds_xedap[n_xedap++] = x;
                }
                else if (chon == 2)
                {
                    XeMay x;
                    cout << "\n\n\t\tNhap thong tin thue xe may\n";
                    x.nhapThongTin();
                    ds_xemay[n_xemay++] = x;
                }
                else
                    break;
            }
        }
        else if (luachon == 2)
        {
            xuatTatCaThongTin(ds_xedap, n_xedap, ds_xemay, n_xemay);
            cout << "\n\n";
            system("pause");
        }
        else if (luachon == 3)
        {
            cout << "\n\nTong tien thue xe la: "
                 << (size_t)tongTienThueXe(ds_xedap, n_xedap, ds_xemay, n_xemay)
                 << "\n\n";
            system("pause");
        }
        else if (luachon == 4)
        {
            // Xuat danh sach xe dap
            cout << "\n\n\t\t Danh Sach Thue Xe Dap";
            for (int i = 0; i < n_xedap; i++)
            {
                cout << "\n\t Thong tin thue xe dap thu " << i + 1;
                ds_xedap[i].xuatThongTin();
                cout << "\nSo tien thue: " << (size_t)ds_xedap[i].tinhTienThueXe();
            }
            cout << "\n\n";
            system("pause");
        }
        else if (luachon == 5)
        {
            float tong = 0;
            // Xuat danh sach xe dap
            for (int i = 0; i < n_xemay; i++)
            {
                if (ds_xemay[i].get_loaiXe() == 250)
                    tong += ds_xemay[i].tinhTienThueXe();
            }
            cout << "Tong so tien thue xe loai 250: " << (size_t)tong << "\n\n";
            system("pause");
        }
        else
            break;
    }
}