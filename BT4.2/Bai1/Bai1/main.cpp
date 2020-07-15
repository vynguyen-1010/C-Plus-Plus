#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
	PhanSo ps1, ps2;

	cout << "\n\tNhap phan so thu nhat: " << endl;
	ps1.Nhap();
	cout << "\n\tPhan so vua nhap la: ";
	ps1.Xuat();
	cout << "\n\tNhap phan so thu hai: " << endl;
	ps2.Nhap();
	cout << "\n\tPhan so vua nhap la: ";
	ps2.Xuat();

	cout << "\nCong hai phan so, tong = ";
	PhanSo tong = ps1.Cong(ps2);
	tong.RutGon();
	tong.Xuat();
	cout << "\nTru hai phan so, hieu = ";
	PhanSo hieu = ps1.Tru(ps2);
	hieu.RutGon();
	hieu.Xuat();
	cout << "\nNhan hai phan so, tich = ";
	PhanSo tich = ps1.Nhan(ps2);
	tich.RutGon();
	tich.Xuat();
	cout << "\nChia hai phan so, thuong = ";
	PhanSo thuong = ps1.Chia(ps2);
	thuong.RutGon();
	thuong.Xuat();
	system("pause");
	return 0;
}