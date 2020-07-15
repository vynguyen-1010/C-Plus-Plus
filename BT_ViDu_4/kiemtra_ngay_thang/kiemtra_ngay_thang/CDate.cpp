#include "CDate.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
static string Thang[] = { "","gieng","hai","ba","bon","nam","sau","bay","tam","chin","muoi","muoi mot","chap" };
//static string Thu[] = { " ","Chu nhat","hai","ba","tu","nam","sau","bay" };
static int NgayThang[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


void CDate::nhap()
{
	cout << "\n Ngay: ";
	cin >> mNgay;
	cout << "\n Thang: ";
	cin >> mThang;
	cout << "\n Nam: ";
	cin >> mNam;
}

int CDate::hopLe()
{
	if ((mThang < 1) || (mThang > 12))    return FALSE;
	else
	{
		if ((mNgay >= 1) && (mNgay <= NgayThang[mThang]))    return TRUE;
		else if ((mNgay == 29) && laNamNhuan(mNam))           return TRUE;
		else    return FALSE;
	}
}
int CDate::laNamNhuan(int nam)
{
	if (((nam % 400) == 0) || (((nam % 4) == 0) && ((nam % 100) != 0))) return TRUE;
	else   return FALSE;
}
void CDate::in()
{
	cout << endl << " Ngay da nhap la: " << mNgay;
	cout << " Thang " << Thang[mThang];
	cout << " Nam " << mNam << endl;
}