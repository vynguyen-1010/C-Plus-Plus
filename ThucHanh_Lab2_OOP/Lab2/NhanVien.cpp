#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;


NhanVien::NhanVien() {
	char MaNV[8] = { NULL };
	char HoTen[20] = { NULL };
	char PhongBan[20] = { NULL };
	int Luong = 0;
	int Thuong = 0;
	int ThucLanh = 0;
}

//Nhap thong tin 1 nhan vien
void NhanVien::Nhap(NhanVien &nv){
	rewind(stdin);
	cout << "\nNhap Ma Nhan Vien: "; gets_s(nv.MaNV);	
	cout << "\nNhap Ho Ten: "; gets_s(nv.HoTen);
	cout << "\nNhap Phong Ban (1. marketing \t 2.kinh doanh \t 3.nhan su) "; gets_s(nv.PhongBan);
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
	if (strcmp(a->PhongBan, "marketing")==1) {
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
	if (strcmp(a->PhongBan, "nhan su") == 1) {
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
	if (strcmp(a->PhongBan, "kinh doanh") == 1) {
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