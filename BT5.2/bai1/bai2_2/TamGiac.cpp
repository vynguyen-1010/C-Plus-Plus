#include "TamGiac.h"
TamGiac::TamGiac()
{
}
TamGiac::TamGiac(diem x, diem y, diem z)
{
	A = x; B = y; C = z;
}
TamGiac::~TamGiac(void)
{
}
void TamGiac::nhap()
{
	int kt;
	do {
		kt = 0;
		cout << "\nnhap dinh A";
		A.nhap();
		cout << "\nnhap dinh B";
		B.nhap();
		cout << "\nnhap dinh C";
		C.nhap();
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
void TamGiac::xuat()
{
	cout << "\ntam giac tao boi 3 diem: ";
	A.xuat(); cout << " , "; B.xuat(); cout << " , "; C.xuat();
}
void TamGiac::tinhtien(float m, float n)
{
	A.tinhtien(m, n);
	B.tinhtien(m, n);
	C.tinhtien(m, n);
}
void TamGiac::quay(float rad)
{
	A.quay(rad);
	B.quay(rad);
	C.quay(rad);
}
void TamGiac::thuphong(float k)
{
	A.setxy(A.getx()*k, A.gety()*k);
	B.setxy(B.getx()*k, B.gety()*k);
	C.setxy(C.getx()*k, C.gety()*k);
}
