#include"tamgiac.h"
int main()
{
	float x, y, rad, k;
	TamGiac a;
	a.nhap();
	a.xuat();
	cout << "\n\nTinh tien theo vector v(x,y):\nx="; cin >> x;
	cout << "y="; cin >> y;
	a.tinhtien(x, y);
	a.xuat();
	cout << "\nquay goc: rad="; cin >> rad;
	a.quay(rad);
	a.xuat();
	cout << "\nnhap he so thu phong k="; cin >> k;
	a.thuphong(k);
	a.xuat();
	system("pause");
	return 0;
}