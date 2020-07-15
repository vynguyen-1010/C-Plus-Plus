#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;


NhanVien::NhanVien() {
	string MaNV = { NULL };
	string HoTen = { NULL };
	string PhongBan = { NULL };
	int Luong = 0;
	int Thuong = 0;
	int ThucLanh = 0;
}

//Nhap thong tin 1 nhan vien
void NhanVien::Nhap(NhanVien &nv){
	int a;
	cin.ignore();
	do {
		a = 0;		
		cout << "\nNhap Ma Nhan Vien: ";
		getline(cin, nv.MaNV);
		if ((nv.MaNV.length()> 8)){
			a = 1;
			cout << "Nhap lai! Ma nhan vien gom 8 ky tu!" << endl;
		}
	} while (a);
	do {
		a = 0;
		cout << "\nNhap Ho Ten: ";
		getline(cin, nv.HoTen);
		if ((nv.HoTen.length() > 30)) {
			a = 1;
			cout << "Nhap lai!" << endl;
		}
	} while (a);
	do {
		a = 0;
		cout << "\nNhap Phong Ban: ";
		getline(cin, nv.PhongBan);
		if ((nv.PhongBan.length() > 20)) {
			a = 1;
			cout << "Nhap lai! Ma nhan vien gom 8 ky tu!" << endl;
		}
	} while (a);
	cout << "\nLuong Co Ban: "; cin >> nv.Luong;
	cout << "\nThuong Hang Thang: "; cin >> nv.Thuong;
	nv.ThucLanh = nv.Luong + nv.Thuong;
}

//Nhap thong tin cho danh sach nhan vien
void NhanVien::Nhap_DS_NV(NhanVien a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << "\nNhap nhan vien thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}

//Xuat thong tin 1 nhan vien
void NhanVien::Xuat(NhanVien nv) {
	cout << "\n\tMa Nhan vien: " << nv.MaNV;
	cout << "\n\tHo Ten: " << nv.HoTen;
	cout << "\n\tPhong Ban: " << nv.PhongBan;
	cout << "\n\tLuong co ban: " << nv.Luong;
	cout << "\n\tThuong: " << nv.Thuong;
	//nv.thucLanh = nv.luong + nv.thuong;
	cout << "\n\tThuc lanh: " << nv.ThucLanh;
}

//Xuat thong tin danh sach nhan vien
void NhanVien::Xuat_DS_NV(NhanVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nThong tin Nhan vien thu: " << i + 1;
		Xuat(a[i]);
	}
}

//In ra thong tin nhan vien co luong co ban thap nhat
void NhanVien::Luong_CoBan_ThapNhat(NhanVien a[], int n) {
	int min = a[0].Luong;
	for (int i = 0; i < n; i++) {
		if (a[i].Luong < min) {
			min = a[i].Luong;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i].Luong == min) {
			Xuat(a[i]); cout << "\n";
		}
	}
}

//Tong thuc lanh cua tat ca nhan vien
void NhanVien::Tong_ThucLanh(NhanVien a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i].ThucLanh;
	}
	cout << "Tong Thuc Lanh cua tat ca nhan vien: " << sum << endl;
}

//Dem so nhan vien co thuong cao hon 1 200 000
int NhanVien::Dem(NhanVien a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].Thuong >= 1200000) {
			count++;
		}
	}
	return count;
}

//Sap xep
void NhanVien::SapXep(NhanVien a[], int n) {
	if (a->PhongBan.compare("marketing")==0) {
		NhanVien tg;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i].MaNV < a[j].MaNV) {
					// Hoan vi 2 so a[i] va a[j]
					tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		Xuat_DS_NV(a, n);
	}
	if (a->PhongBan.compare("nhan su") == 0) {
		NhanVien tg;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i].MaNV < a[j].MaNV) {
					// Hoan vi 2 so a[i] va a[j]
					tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		Xuat_DS_NV(a, n);
	}
	if (a->PhongBan.compare("kinh doanh") == 0) {
		NhanVien tg;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i].MaNV < a[j].MaNV) {
					// Hoan vi 2 so a[i] va a[j]
					tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		Xuat_DS_NV(a, n);
	}
}
NhanVien::~NhanVien()
{
}