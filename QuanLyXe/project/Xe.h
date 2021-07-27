#pragma one
#ifndef XE_H
#define XE_H

#include <iostream>
#include <string>
using namespace std;

class Xe
{
protected:
    string hoTenNguoiThue;
    float soGioThue;

public:
    void xuatThongTin();
    void nhapThongTin();
};

class XeDap : public Xe
{
private:
public:
    float tinhTienThueXe();
};

class XeMay : public Xe
{
private:
    int loaiXe;
    string bienSo;

public:
    void xuatThongTin();
    void nhapThongTin();
    float tinhTienThueXe();
    int get_loaiXe();
    void set_loaiXe(int);
};

#include "Xe.cpp"
#endif