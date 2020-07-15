#include <iostream>
using namespace std;

struct PhanSo {
	int TuSo;
	int MauSo;
};
typedef struct PhanSo PS;

//Nhập vào 1 phân số
void NhapPhanSo(PS &x) {
	cout << "Nhap Tu So: "; 
	cin >> x.TuSo;
	do {
		cout << "Nhap Mau So: "; 
		cin >> x.MauSo;
		if (x.MauSo == 0) {
			cout << "Nhap sai, yeu cau nhap lai mau so!" << endl;
		}
	} while (x.MauSo == 0);
}

//Xuất phân sô
void XuatPhanSo(PS x) {
	if (x.MauSo == 1) {
		cout << x.TuSo;
	}
	else
		cout << x.TuSo << "/" << x.MauSo;
}

//Tìm ước chung lớn nhất
int UCLN(int x, int y) {
	if (x < 0) {
		x *= -1;
	}
	if (y < 0) {
		y *= -1;
	}
	while (x != y) {
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	return x;
}

//Rút gọn phân số
void RutGon_PhanSo(PS &x) {
	int ucln = UCLN(x.TuSo, x.MauSo);
	x.TuSo = x.TuSo / ucln;
	x.MauSo = x.MauSo / ucln;
}

//Tìm phân số lớn nhất
void Max(PS x1, PS x2) {
	int ps1, ps2;
	ps1 = x1.TuSo / x1.MauSo;
	ps2 = x2.TuSo / x2.MauSo;
	if (ps1 > ps2) {
		XuatPhanSo(x1);
	}
	else
		XuatPhanSo(x2);
}

//Tính tổng, hiệu, tích, thương
PS TongPS(PS x1, PS x2)
{
	PS x;
	x.TuSo = x1.TuSo*x2.MauSo + x1.MauSo*x2.TuSo;
	x.MauSo = x1.MauSo*x2.MauSo;
	return x;
	
}

PS HieuPS(PS x1, PS x2)
{
	PS x;
	x.TuSo = x1.TuSo*x2.MauSo - x1.MauSo*x2.TuSo;
	x.MauSo = x1.MauSo*x2.MauSo;
	return x;
}

PS TichPS(PS x1, PS x2)
{
	PS x;
	x.TuSo = x1.TuSo * x2.TuSo;
	x.MauSo = x1.MauSo * x2.MauSo;
	return x;
}

PS ThuongPS(PS x1, PS x2)
{
	PS x;
	x.TuSo = x1.TuSo * x2.MauSo;
	x.MauSo = x1.MauSo * x2.TuSo;
	return x;
}

int main() {
	PS ps1, ps2, ps3;
	int key;
	while (true) {
		system("cls");
		cout << "\t\tPHAN SO";
		cout << "\n\t1. Rut gon phan so";
		cout << "\n\t2. Tim phan so lon nhat";
		cout << "\n\t3. Tong 2 phan so";
		cout << "\n\t4. Hieu 2 phan so";
		cout << "\n\t5. Tich 2 phan so";
		cout << "\n\t6. Thuong 2 phan so";
		cout << "\n\t0. Thoat";
		cout << "\n\tNhap lua chon cua ban" << endl;
		cin >> key;
		switch (key) {
		case 1:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			cout << "Phan so la: "; XuatPhanSo(ps1);
			cout << "\nPhan so sau khi rut gon la: "; 
			RutGon_PhanSo(ps1); XuatPhanSo(ps1);
			cout << endl;
			system("pause");
			break;
		case 2:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			NhapPhanSo(ps2);
			cout << "\nPhan so thu 1 la: "; XuatPhanSo(ps1);
			cout << "\nPhan so thu 2 la: "; XuatPhanSo(ps2);
			cout << "\nPhan so lon nhat la: "; Max(ps1, ps2);
			cout << endl;
			system("pause");
			break;
		case 3:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			NhapPhanSo(ps2);
			cout << "\nPhan so thu 1 la: "; XuatPhanSo(ps1);
			cout << "\nPhan so thu 2 la: "; XuatPhanSo(ps2);
			cout << "\nTong 2 phan so la: "; 
			ps3 = TongPS(ps1, ps2);
			RutGon_PhanSo(ps3);
			XuatPhanSo(ps3);
			cout << endl;
			system("pause");
			break;
		case 4:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			NhapPhanSo(ps2);
			cout << "\nPhan so thu 1 la: "; XuatPhanSo(ps1);
			cout << "\nPhan so thu 2 la: "; XuatPhanSo(ps2);
			cout << "\nHieu 2 phan so la: ";
			ps3 = HieuPS(ps1, ps2);
			RutGon_PhanSo(ps3);
			XuatPhanSo(ps3);
			cout << endl;
			system("pause");
			break;
		case 5:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			NhapPhanSo(ps2);
			cout << "\nPhan so thu 1 la: "; XuatPhanSo(ps1);
			cout << "\nPhan so thu 2 la: "; XuatPhanSo(ps2);
			cout << "\nTich 2 phan so la: ";
			ps3 = TichPS(ps1, ps2);
			RutGon_PhanSo(ps3);
			XuatPhanSo(ps3);
			cout << endl;
			system("pause");
			break;
		case 6:
			cout << "Nhap phan so" << endl;
			NhapPhanSo(ps1);
			NhapPhanSo(ps2);
			cout << "\nPhan so thu 1 la: "; XuatPhanSo(ps1);
			cout << "\nPhan so thu 2 la: "; XuatPhanSo(ps2);
			cout << "\nThuong 2 phan so la: ";
			ps3 = ThuongPS(ps1, ps2);
			RutGon_PhanSo(ps3);
			XuatPhanSo(ps3);
			cout << endl;
			system("pause");
			break;
		case 0:
			cout << "\nThoat chuong trinh!";
			return 0;
		default:
			cout << "\nKhong co chuc nang nay!";
			cout << "\nBam phim bat ky de tiep tuc!";
			break;
		}
	}
}