#include "CDate.h"
#include <iostream>
using namespace std;
#include <conio.h>
#define false 0
#define true !false
static const char* Thang[] = { "","gieng","hai","ba","bon","nam","sau","bay","tam","chin","muoi","muoi mot","chap" };
static const char* Thu[] = { "","Chu nhat","hai","ba","tu","nam","sau","bay" };
static int NgayThang[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

void CDate::nhap() {
	cout << endl << "Ngay: ";
	cin >> mNgay;
	cout << endl << "Thang: ";
	cin >> mThang;
	cout << endl << "Nam: ";
	cin >> mNam;
}

int CDate::hopLe() {
	if ((mThang < 1) || (mThang > 12)) 
		return false;
	else
	{
		if ((mNgay >= 1) && (mNgay <= NgayThang[mThang])) 
			return true;
		else if ((mNgay == 29) && laNamNhuan(mNgay)) 
			return true;
		else 
			return false;
	}
}

int CDate::laNamNhuan(int nam)
{
	if (((nam % 400) == 0) || (((nam % 4) == 0) && ((nam % 100) != 0)))
		return true;
	else 
		return false;
}
void CDate::in()
{
	cout << endl << "Ngay da nhap: " << mNgay;
	cout << " thang " << Thang[mThang];
	cout << " nam " << mNam << endl;
}