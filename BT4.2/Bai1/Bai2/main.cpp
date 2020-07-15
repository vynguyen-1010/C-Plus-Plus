#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main() {
	SoPhuc sp1, sp2;

	cout << "\n\tNhap so phuc thu nhat" << endl;
	sp1.Nhap();
	cout << "\nSo phuc vua nhap la: ";
	sp1.Xuat();
	cout << "\n\tNhap so phuc thu hai" << endl;
	sp2.Nhap();
	cout << "\nSo phuc vua nhap la: ";
	sp2.Xuat();
	cout << "Tong hai so phuc: "; 
	SoPhuc tong = sp1.Cong(sp2);
	tong.Xuat();
	cout << "Hieu hai so phuc: ";
	SoPhuc hieu = sp1.Tru(sp2);
	hieu.Xuat();
	cout << "Tich hai so phuc: ";
	SoPhuc tich = sp1.Nhan(sp2);
	tich.Xuat();
	cout << "Thuong hai so phuc: ";
	SoPhuc thuong = sp1.Chia(sp2);
	thuong.Xuat();
	system("pause");
	return 0;
}