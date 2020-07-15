#pragma once
#include <iostream>
using namespace std;
class matran {
private:
	int row;
	int col;
	int a[20][20];

public:
	matran(); //constructor mac dinh
	matran(int, int);//constructor co doi so
	void nhap();//ham nhap
	void xuat();//ham xuat
	friend ostream& operator<<(ostream&, const matran&);//cout<<
	friend istream& operator>>(istream&, matran&);//cin>>
	matran operator+(matran& m);//dinh nghia da nang hoa toan  tu + 2 Ma Tran
	matran operator-(matran& m);//dinh nghia da nang hoa toan tu - 2 Ma Tran
	matran operator*(matran& m);//dinh nghia da nang hoa toan tu  * 2 Ma Tran
	matran operator=(matran& m);//dinh nghia da nang hoa toan tu gan =
	int operator==(matran& m);//dinh nghia da nang hoa toan tu so sanh ==

};