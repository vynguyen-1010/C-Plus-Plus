#pragma once
#include <string>
class NhanVien
{
private:
	char MaNV[8];
	char HoTen[20];
	char PhongBan[20];
	int Luong;
	int Thuong;
	int ThucLanh;
public:
	NhanVien();
	void Nhap(NhanVien &nv);
	void Nhap_DS_NV(NhanVien a[], int n);
	void Xuat(NhanVien nv);
	void Xuat_DS_NV(NhanVien a[], int n);
	void Luong_CoBan_ThapNhat(NhanVien a[], int n);
	void Tong_ThucLanh(NhanVien a[], int n);
	int Dem(NhanVien a[], int n);
	void SapXep(NhanVien a[], int n);
	~NhanVien();
};

