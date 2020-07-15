#include <iostream>
using namespace std;
#include "NhanVien.h"
#include <string>

int main() {
	NhanVien nv;
	int key;
	int n;
	bool daNhap = false;
	do {
		cout << "\nNhap so luong NV: "; cin >> n;
	} while (n <= 0);
	NhanVien *a = new NhanVien[n];
	//NV a[2];
	while (true) {
		system("cls");
		cout << "\tCHUONG TRINH QUAN LY NHAN VIEN";
		cout << "\n\t1. Nhap du lieu";
		cout << "\n\t2. Xuat DS nhan vien";
		cout << "\n\t3. Tong thuc lanh cua tat ca nhan vien";
		cout << "\n\t4. So nhan vien co thuong lon hon hoac bang 1 200 000";
		cout << "\n\t5. Danh sach nhan vien co luong co ban thap nhat";
		cout << "\n\t6. Sap xep";
		cout << "\n\t0. Thoat";
		cout << "\n\tNhap lua chon cua ban" << endl;
		cin >> key;
		switch (key) {
		case 1:
			cout << "\nBan da chon nhap DS nhan vien!";
			nv.Nhap_DS_NV(a, n);
			cout << "\nBan da nhap thanh cong!";
			daNhap = true;
			cout << "\nBam phim bat ky de tiep tuc!";
			system("pause");
			break;
		case 2:
			if (daNhap) {
				cout << "\nBan da chon xuat DS nhan vien!";
				nv.Xuat_DS_NV(a, n);
			}
			else {
				cout << ("\nNhap DS NV truoc!!!!");
			}
			cout << ("\nBam phim bat ky de tiep tuc!");
			system("pause");
			break;
		case 3:
			if (daNhap) {
				nv.Tong_ThucLanh(a, n);
			}
			system("pause");
			break;
		case 4:
			if (daNhap) {
				cout << "So nhan vien co thuong lon hon hoac bang 1 200 000 la: " << nv.Dem(a, n) << endl;
			}
			system("pause");
			break;
		case 5:
			if (daNhap) {
				cout << "Nhung nhan vien co luong co ban thap nhat";
				nv.Luong_CoBan_ThapNhat(a, n);
			}
			system("pause");
			break;
		case 6:
			if (daNhap) {
				cout << "Sap xep";
				nv.SapXep(a, n);
			}
			system("pause");
			break;
		case 0:
			cout << ("\nBan da chon thoat chuong trinh!");
			return 0;
		default:
			cout << ("\nKhong co chuc nang nay!");
			cout << ("\nBam phim bat ky de tiep tuc!");

		}
	}
}