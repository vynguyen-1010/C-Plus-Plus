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
	void nhap(diem &);
	void nhap_n_diem(diem a[], int n);
	void xuat(diem);
	void xuat_n_diem(diem a[], int n);
	void tinhtien_n_diem(diem a[], int n);
	float khoangcach(diem &a, diem &b);
	void max_kc(diem a[], int n);
};


