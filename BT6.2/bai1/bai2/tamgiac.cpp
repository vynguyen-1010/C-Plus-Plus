#include "tamgiac.h"

tamgiac::tamgiac()
{
}
tamgiac::tamgiac(diem x, diem y, diem z)
{
	A = x; B = y; C = z;
}
tamgiac::~tamgiac(void)
{
}
void tamgiac::nhap(tamgiac &a)
{
	int kt;
	do {
		kt = 0;
		cout << "\nnhap dinh A";
		a.A.nhap();
		cout << "\nnhap dinh B";
		a.B.nhap();
		cout << "\nnhap dinh C";
		a.C.nhap();
		diem d, e;
		d = A.vector(B);
		e = A.vector(C);
		if (float(d.getx()*e.gety()) == float(d.gety()*e.getx()))
		{
			kt = 1;
			cout << "\ntam giac khong ton tai! nhap lai!";
		}
		cout << "\n";
	} while (kt);
}
void tamgiac::nhap_n_tamgiac(tamgiac a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap vao tam giac thu " << i + 1 << endl;
		nhap(a[i]);
	}
}
void tamgiac::xuat(tamgiac a)
{
	
	a.A.xuat(); cout << " , "; a.B.xuat(); cout << " , "; a.C.xuat(); cout << endl;
}
void tamgiac::xuat_n_tamgiac(tamgiac a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nTam giac thu " << i + 1;
		xuat(a[i]);
	}
}

void tamgiac::tinhtien_n_tamgiac(tamgiac a[], int n) {
	cout << "\nNhap vao toa do vector muon tinh tien theo: ";
	diem k;
	k.nhap();
	for (int i = 0; i < n; i++) {		
		a[i].A.tinhtien(k);
		a[i].B.tinhtien(k);
		a[i].C.tinhtien(k);
		xuat(a[i]);
	}
}

float tamgiac::chu_vi(tamgiac a) {
	float m = a.A.khoangcach(a.A, a.B);
	float k = a.B.khoangcach(a.B, a.C);
	float q = a.C.khoangcach(a.C, a.A);
	return m + k + q;
}

void tamgiac::max_chuvi(tamgiac a[], int n) {
	float max = 0;
	for (int i = 0; i < n; i++) {
		if (max < chu_vi(a[i])) {
			max = chu_vi(a[i]);
		}
	}
	cout << "\nChu vi tam giac lon nhat la: " << max << endl;
}

float tamgiac::dien_tich(tamgiac a) {
	float m = a.A.khoangcach(a.A, a.B);
	float k = a.B.khoangcach(a.B, a.C);
	float q = a.C.khoangcach(a.C, a.A);
	float p = (float)chu_vi(a) / 2;
	return sqrt(p*(p - m)*(p - k)*(p - q));
}

void tamgiac::max_dientich(tamgiac a[], int n) {
	float max = 0;
	for (int i = 0; i < n; i++) {
		if (max < dien_tich(a[i])) {
			max = dien_tich(a[i]);
		}
	}
	cout << "\nDien tich tam giac lon nhat la: " << max << endl;
}
