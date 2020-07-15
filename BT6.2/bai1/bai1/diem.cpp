#include "diem.h"
#include <math.h>
diem::diem()
{
	float a = 0;
	float b = 0;
}

diem::diem(float a, float b)
{
	x = a; y = b;
}
void diem::nhap(diem &d)
{
	cout << "\nHoanh do x="; cin >> d.x;
	cout << "Tung do y="; cin >> d.y;
}

void diem::nhap_n_diem(diem a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap vao diem thu " << i + 1 << endl;
		nhap(a[i]);
	}
}
void diem::xuat(diem d)
{
	cout << "( " << d.x << " , " << d.y << " )";
}

void diem::xuat_n_diem(diem a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nDiem thu " << i + 1;
		xuat(a[i]);
	}
}
diem::~diem(void)
{
}
//void diem::tinhtien(diem a)
//{
//	//nhap(a);
//	x += a.x;
//	y += a.y;
//}
void diem::tinhtien_n_diem(diem a[], int n) {
	cout << "\nNhap vao toa do vector muon tinh tien theo: ";
	diem k;
	nhap(k);
	for (int i = 0; i < n; i++) {
		a[i].x += k.x;
		a[i].y += k.y;
		xuat(a[i]); cout << "\t";
	}
}


float diem::khoangcach(diem &a, diem &b) {
	 return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
void diem::max_kc(diem a[], int n) {
	float max = 0;
	float min = khoangcach(a[0], a[1]);
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (max < khoangcach(a[i], a[j])) {
				max = khoangcach(a[i], a[j]);
			}
			if (min > khoangcach(a[i], a[j])) {
				min = khoangcach(a[i], a[j]);
			}
		}
	}
	cout << "\nKhoang cach lon nhat giua hai diem trong tap diem vua nhap la: " << max << endl;
	cout << "\nKhoang cach nho nhat giua hai diem trong tap diem vua nhap la: " << min << endl;
}


