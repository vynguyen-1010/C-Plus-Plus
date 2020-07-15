#include "TestCandidate.h"
#include "Candidate.h"

int n;
Candidate danhsach[100];

void TestCandidate::NhapDanhSach() {
	cout << "Nhap so luong thi sinh: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "\n\tNhap thi sinh thu " << i+1;
		danhsach[i].Nhap();
	}
}
void TestCandidate::XuatDanhSach() {
	for (int i = 0; i < n; i++)
	{
		danhsach[i].Xuat();
	}
}
void TestCandidate::KiemTra() {
	for (int i = 0; i < n; i++)
	{
		float t = danhsach[i].Tong();
		if (t > 15)
		{
			danhsach[i].Xuat();
		}
	}
}
