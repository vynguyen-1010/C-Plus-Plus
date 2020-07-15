#pragma once

#include <iostream>
# include <conio.h>
# include <stdio.h>
using namespace std;
class vt;
class mt;
class vt
{
private: int n; int a[50];
public:
	void nhap();
	friend void xuat(vt x);
	friend vt tich(mt y, vt);
};
class mt
{
private:
	int n;
	int b[50][50];
public:
	void nhap();
	friend void xuat(mt);
	friend vt tich(mt y, vt x);
};