#include "Candidate.h"
#include<iostream>
#include <conio.h>

using namespace std;


Candidate::Candidate()
{
}

void Candidate::Nhap()
{
	cout << "\nNhap ma so thi sinh: ";
	rewind(stdin);
	getline(cin, MS);
	cout << "\nNhap ho ten thi sinh: ";
	rewind(stdin);
	getline(cin, HoTen);
	cout << "\nNhap ngay thang nam sinh ";
	do {
		cout << "\nNhap nam: ";
		cin >> Nam;
	} while (Nam < 1900 || Nam>2015);
	do {
		cout << "\nNhap thang: ";
		cin >> Thang;
	} while (Thang < 1 || Thang >12);
	if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12)
	{
		do {
			cout << "\nNhap ngay: ";
			cin >> Ngay;
		} while (Ngay < 1 || Ngay>31);
	}
	else if (Thang == 2)
	{
		if (Nam % 4 == 0)
			do {
				cout << "\nNhap ngay: ";
				cin >> Ngay;
			} while (Ngay < 1 || Ngay>29);
		else
			do {
				cout << "\nNhap ngay: ";
				cin >> Ngay;
			} while (Ngay < 1 || Ngay>28);
	}
	else
	{
		do {
			cout << "\nNhap ngay: ";
			cin >> Ngay;
		} while (Ngay < 1 || Ngay>30);
	}
	do {
		cout << "\nNhap diem toan: ";
		cin >> Toan;
	} while (Toan < 0 || Toan>10);
	do {
		cout << "\nNhap diem van: ";
		cin >> Van;
	} while (Van < 0 || Van>10);
	do {
		cout << "\nNhap diem anh: ";
		cin >> Anh;
	} while (Anh < 0 || Anh>10);
}

void Candidate::Xuat()
{
	cout << "\n\tThong tin cua thi sinh";
	cout << "\nMa so: " << MS;
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay thang nam sinh:" << Ngay << "/" << Thang << "/" << Nam;
	cout << "\nDiem toan: " << Toan;
	cout << "\nDiem van: " << Van;
	cout << "\nDiem anh: " << Anh << endl;
}
float Candidate::Tong()
{
	return (Toan + Van + Anh);
}
Candidate::~Candidate()
{
}