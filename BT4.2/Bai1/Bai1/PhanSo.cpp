#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo() {
	TuSo = 0;
	MauSo = 1;
}
PhanSo::PhanSo(int TuSo1, int MauSo1) {
	TuSo = TuSo1;
	if (MauSo != 0)
		MauSo = MauSo1;
	else
		MauSo = 1;
}
void PhanSo::Nhap() {
	cout << "\nNhap tu so: ";
	cin >> TuSo;
	do
	{
		cout << "\nNhap mau so: ";
		cin >> MauSo;
		if (MauSo == 0)
			cout << "\nNhap sai! Yeu cau nhap lai!" << endl;
	} while (MauSo == 0);
}
void PhanSo::Xuat() {
	if (MauSo == 0) {
		cout << "";
	}
	else
		if (MauSo == 1)
			cout << TuSo << endl;
		else
			cout << TuSo << "/" << MauSo << endl;
}
int PhanSo::UCLN(int a, int b) {
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
void PhanSo::RutGon() {
	if (MauSo == 0)
		cout << "";
	else
		if (TuSo == 0) {
			MauSo = 1;
		}
		else {
			int ucln = UCLN(TuSo, MauSo);
			TuSo = TuSo / ucln;
			MauSo = MauSo / ucln;
		}
}
PhanSo PhanSo::Cong(PhanSo &x) {
	if (((TuSo*x.MauSo) + (MauSo*x.TuSo)) == 0)
		return PhanSo(0, 1);
	return PhanSo((TuSo*x.MauSo) + (MauSo*x.TuSo), MauSo*x.MauSo);
}
PhanSo PhanSo::Tru(PhanSo &x) {
	if (((TuSo*x.MauSo) - (MauSo*x.TuSo)) == 0)
		return PhanSo(0, 1);
	return PhanSo((TuSo*x.MauSo) - (MauSo*x.TuSo), MauSo*x.MauSo);
}
PhanSo PhanSo::Nhan(PhanSo &x) {
	return PhanSo(this->TuSo*x.TuSo, MauSo*x.MauSo);
}
PhanSo PhanSo::Chia(PhanSo &x) {
	if ((TuSo == 0) & (x.TuSo == 0))
	{
		cout << "Error!" << endl;
		return PhanSo(0,0);
	}
	else
		return PhanSo(this->TuSo*x.MauSo, this->MauSo*x.TuSo);
}
//PhanSo::~PhanSo() { cout << "Vao ham huy"; }

