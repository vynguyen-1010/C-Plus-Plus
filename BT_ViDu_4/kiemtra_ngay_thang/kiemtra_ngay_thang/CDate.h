#pragma once
#include <iostream>
#include <conio.h>
#define FALSE 0
#define TRUE !FALSE

class CDate
{
private:
	int mNgay, mThang, mNam;
	int laNamNhuan(int);
public:
	void nhap();
	int hopLe();
	void in();
};