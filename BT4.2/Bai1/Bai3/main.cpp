#include"Candidate.h"
#include "TestCandidate.h"
#include<iostream>

using namespace std;

void main()
{
	Candidate can;
	TestCandidate test;
	cout << "\n\tNhap danh sach thi sinh" << endl;
	test.NhapDanhSach();
	cout << "\n\t\nDanh sach da nhap: ";
	test.XuatDanhSach();
	cout << "\n\tDanh sach thi sinh co tong diem lon hon 15" << endl;
	test.KiemTra();
	system("pause");
}