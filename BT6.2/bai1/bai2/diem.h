#pragma once
#include<iostream>
using namespace std;
class diem
{
private:
	float x, y;
public:
	diem();
	diem(float, float);
	~diem(void);
	void nhap();
	void xuat();
	void setx(float);
	void sety(float);
	diem vector(diem);
	float getx();
	float gety();
	void setxy(float, float);
	void tinhtien(diem a);
	float khoangcach(diem &a, diem &b);
};