#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int TuSo;
	int MauSo;
private:
	int UCLN(int a, int b);
public:
	PhanSo();
	PhanSo(int TuSo1, int MauSo1);
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Cong(PhanSo &);
	PhanSo Tru(PhanSo &);
	PhanSo Nhan(PhanSo &);
	PhanSo Chia(PhanSo &);
};

