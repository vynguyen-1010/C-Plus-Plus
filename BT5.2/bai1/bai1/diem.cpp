#include "diem.h"
#include <iostream>
using namespace std;

diem::diem(){
	x = 0;
	y = 0;
}
void diem::Nhap() {
	cout << "\nNhap vao hoanh do: ";
	cin >> x;
	cout << "\nNhap vao tung do: ";
	cin >> y;
}

void diem::Xuat() {
	cout << "\nDiem co toa do la: (" << x << ", " << y << ")" << endl;
}

void diem::TinhTien() {
	cout << "\nNhap vao khoang cach muon tinh tien" << endl;
	diem k;
	k.Nhap();
	x += k.x;
	y += k.y;
	cout << "\nDiem sau khi tinh tien" << endl;
	Xuat();
}
diem::~diem(){}