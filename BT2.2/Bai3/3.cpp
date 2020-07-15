#include <iostream>

#include <string.h>
#include <stdlib.h>
using namespace std;

struct NhanVien {
	char maNhanVien[8];
	char hoten[20];
	char phongBan[10];
	int luong;
	int thuong;
	int thucLanh;
};
typedef NhanVien NV;

//Nhập thông tin 1 nhân viên
void nhapNV(NV &nv) {
	rewind(stdin);
	cout << "\nNhap Ma Nhan Vien: "; gets_s(nv.maNhanVien);
	cout << "\nNhap Ho Ten: "; gets_s(nv.hoten);
	cout << "\nNhap Phong Ban: "; gets_s(nv.phongBan);
	cout << "\nLuong Co Ban: "; cin >> nv.luong;
	cout << "\nThuong Hang Thang: "; cin >> nv.thuong;
	nv.thucLanh = nv.luong + nv.thuong;
}

//Nhập thông tin cho danh sách nhân viên
void nhapN_NV(NV a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << "\nNhap nhan vien thu " << i + 1 << endl;
		nhapNV(a[i]);
	}
}

//In ra thông tin 1 nhân viên
void xuat(NV nv) {
	cout << "\n\tMa Nhan vien: " << nv.maNhanVien;
	cout << "\n\tHo Ten: " << nv.hoten;
	cout << "\n\tPhong Ban: " << nv.phongBan;
	cout << "\n\tLuong co ban: " << nv.luong;
	cout << "\n\tThuong: " << nv.thuong;
	//nv.thucLanh = nv.luong + nv.thuong;
	cout << "\n\tThuc lanh: " << nv.thucLanh;
}

//In ra thông tin tất cả nhân viên
void xuatN_NV(NV a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nThong tin Nhan vien thu: " << i + 1;
		xuat(a[i]);
	}
}

//In ra danh sách nhân viên có lương cơ bản thấp nhất
void luongCoBan_Thap_Nhat(NV a[], int n) {
	int min = a[0].luong;
	for (int i = 0; i < n; i++) {
		if (a[i].luong < min) {
			min = a[i].luong;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i].luong == min) {
			xuat(a[i]); cout << "\n";
		}
	}
}

//Tổng thực lãnh hàng tháng của tất cả nhân viên trong công ty
void tongThucLanh(NV a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i].thucLanh;
	}
	cout << "Tong Thuc Lanh cua tat ca nhan vien: " << sum << endl;
}

//Đếm số nhân viên có thưởng cao hơn 1200000
int dem(NV a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].thuong >= 1200000) {
			count++;
		}
	}
	return count;
}

int main() {
	int key;
	int n;
	bool daNhap = false;
	do {
		cout << "\nNhap so luong NV: "; cin >> n;
	} while (n <= 0);
	NV *a = new NV[n];
	//NV a[2];
	while (true) {
		system("cls");
		cout << "\tCHUONG TRINH QUAN LY NHAN VIEN";
		cout << "\n\t1. Nhap du lieu";
		cout << "\n\t2. Xuat DS nhan vien";
		cout << "\n\t3. Tong thuc lanh cua tat ca nhan vien";
		cout << "\n\t4. So nhan vien co thuong lon hon hoac bang 1 200 000";
		cout << "\n\t5. Danh sach nhan vien co luong co ban thap nhat";
		cout << "\n\t0. Thoat";
		cout << "\n\tNhap lua chon cua ban" << endl;
		cin >> key;
		switch (key) {
		case 1:
			cout<<"\nBan da chon nhap DS nhan vien!";
			nhapN_NV(a, n);
			cout<<"\nBan da nhap thanh cong!";
			daNhap = true;
			cout<<"\nBam phim bat ky de tiep tuc!";
			system("pause");
			break;
		case 2:
			if (daNhap) {
				cout<<"\nBan da chon xuat DS nhan vien!";
				xuatN_NV(a, n);
			}
			else {
				cout<<("\nNhap DS NV truoc!!!!");
			}
			cout<<("\nBam phim bat ky de tiep tuc!");
			system("pause");
			break;
		case 3:
			if (daNhap) {
				tongThucLanh(a, n);
			}
			system("pause");
			break;
		case 4:
			if (daNhap) {
				cout << "So nhan vien co thuong lon hon hoac bang 1 200 000 la: " << dem(a, n) << endl;
			}
			system("pause");
			break;
		case 5:
			if (daNhap) {
				cout << "Nhung nhan vien co luong co ban thap nhat";
				luongCoBan_Thap_Nhat(a, n);
			}
			system("pause");
			break;
		case 0:
			cout<<("\nBan da chon thoat chuong trinh!");
			return 0;
		default:
			cout<<("\nKhong co chuc nang nay!");
			cout<<("\nBam phim bat ky de tiep tuc!");
			
		}
	}
}
