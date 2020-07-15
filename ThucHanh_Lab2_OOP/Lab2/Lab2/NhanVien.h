#pragma once
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <stdio.h>
using namespace std;
class NhanVien
{
private:
	string MaNV;
	string HoTen;
	string PhongBan;
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

