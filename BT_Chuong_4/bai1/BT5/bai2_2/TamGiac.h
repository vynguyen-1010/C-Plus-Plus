#pragma once

#include"diem.h"
class TamGiac
{
private:
	diem A, B, C;
public:
	TamGiac();
	TamGiac(diem, diem, diem);
	~TamGiac(void);
	void nhap();
	void xuat();
	void tinhtien(float = 0, float = 0);
	void quay(float);
	void thuphong(float);
};

