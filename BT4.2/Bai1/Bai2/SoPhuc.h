#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	float Thuc;
	float Ao;
public:
	SoPhuc();
	SoPhuc(float a, float b);
	void Nhap();
	void Xuat();
	SoPhuc Cong(SoPhuc &);
	SoPhuc Tru(SoPhuc &);
	SoPhuc Nhan(SoPhuc &);
	SoPhuc Chia(SoPhuc &);
};

