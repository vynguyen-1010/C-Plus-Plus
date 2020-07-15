#include <iostream>
#include <conio.h>
#include "matran.h"

matran::matran() {
	row = 1;
	col = 1;
	a[0][0] = 0;
}
matran::matran(int a, int b) {
	row = a;
	col = b;
}

//ham nhap
void matran::nhap() {
	cout << "\nNhap Dong: "; cin >> row;
	cout << "\nNhap Cot: "; cin >> col;
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
		{
			cout << "\na[" << i << "][" << j << "]= "; cin >> a[i][j];
		}
}

//ham xuat
void matran::xuat() {
	for (int i = 1; i <= row; i++) {
		cout << endl;
		for (int j = 1; j <= col; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

//dinh nghia da nang hoa toan tu Nhap cin >>
istream& operator>>(istream& is, matran& m) {
	cout << "\nNhap Dong: "; is >> m.row;
	cout << "\nNhap Cot: "; is >> m.col;
	for (int i = 1; i <= m.row; i++)
		for (int j = 1; j <= m.col; j++)
		{
			cout << "\na[" << i << "][" << j << "] = "; is >> m.a[i][j];
		}
	return is;
}

//dinh nghia da nang hoa toan tu Xuat Cout<<
ostream& operator<<(ostream& os, const matran& m) {
	for (int i = 1; i <= m.row; i++)
	{
		os << endl;
		for (int j = 1; j <= m.col; j++)
			os << m.a[i][j] << " ";
		os << endl;
	}
	return os;
}

//da nang hoa toan tu + 2 Ma Tran
matran matran::operator+(matran& m) {
	matran x;
	if (row != m.row && col != m.col) {
		cout << "\n2 ma tran phai cung cap\n";
	}
	else {
		x.row = m.row;
		x.col = m.col;
		for (int i = 1; i <= x.row; i++)
			for (int j = 1; j <= x.col; j++)
				x.a[i][j] = a[i][j] + m.a[i][j];
	}
	return x;

}

//da nang hoa toan tu - 2 Ma Tran
matran matran::operator-(matran& m) {
	matran x;
	if (row != m.row && col != m.col) {
		cout << "\n2 Ma Tran Phai Cung Cap \n";
	}
	else {
		x.row = m.row;
		x.col = m.row;
		for (int i = 1; i <= x.row; i++)
			for (int j = 1; j <= x.col; j++)
				x.a[i][j] = a[i][j] - m.a[i][j];
	}
	return x;
}

//da nang hoa toan tu * 2 Ma Tran
matran matran::operator*(matran& m) {
	matran x;
	if (row != m.row && col != m.col) {
		cout << "\n2 ma Tran phai cung cap\n";
	}
	else {
		x.row = m.row;
		x.col = m.col;
		for (int i = 1; i <= x.row; i++)
			for (int j = 1; j <= x.col; j++)
			{
				x.a[i][j] = 0, 0;
				for (int k = 1; k <= x.col; k++)
					x.a[i][j] += a[i][k] * m.a[k][j];
			}
	}
	return x;
}

//dinh nghia da nang hoa toan tu gan =
matran matran::operator=(matran& m) {
	row = m.row;
	col = m.col;
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			a[i][j] = m.a[i][j];
	return *this;
}

//dinh nghia da nang hoa toan tu so sanh ==
int matran::operator==(matran& m) {
	if (row == m.row && col == m.col) {
		for (int i = 1; i <= row; i++)
			for (int j = 1; j <= col; j++)
				if (a[i][j] != m.a[i][j])
					return 0;
				else
					return 1;
	}
	else
		return 0;
	return 1;
}