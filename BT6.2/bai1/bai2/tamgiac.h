#pragma once
#include"diem.h"
class tamgiac
{
private:
	diem A, B, C;
public:
	tamgiac();
	tamgiac(diem, diem, diem);
	~tamgiac(void);
	void nhap(tamgiac&);
	void nhap_n_tamgiac(tamgiac a[], int n);
	void xuat(tamgiac);
	void xuat_n_tamgiac(tamgiac a[], int n);
	void tinhtien_n_tamgiac(tamgiac a[], int n);
	float dien_tich(tamgiac a);
	void max_dientich(tamgiac a[], int n);
	float chu_vi(tamgiac a);
	void max_chuvi(tamgiac a[], int n);
};
