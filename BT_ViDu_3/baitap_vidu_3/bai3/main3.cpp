#include <iostream>
using namespace std;
#include "CString.h"
int main()
{
	char s[30];
	CString str;
	cout << endl << "Nhap vao 1 chuoi: ";
	cin >> s;
	str.Nhap(s);
	system("cls");
	cout << "Ban da nhap chuoi: ";
	str.Xuat();
	cout << endl << "Chuoi co chieu dai: " << str.ChieuDai() << " ky tu";
	system("pause");
	return 0;
}