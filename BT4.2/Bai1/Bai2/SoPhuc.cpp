#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc() {
	Thuc = 0;
	Ao = 0;
}
SoPhuc::SoPhuc(float a, float b) {
	Thuc = a;
	Ao = b;
}
void SoPhuc::Nhap() {
	cout << "\nNhap phan thuc: ";
	cin >> Thuc;
	cout << "\nNhap phan ao: ";
	cin >> Ao;
}
void SoPhuc::Xuat() {
	if (Ao == 0 & Thuc == 0)
		cout << Thuc << endl;
	else
		if (Thuc == 0)
			cout << Ao << "i" << endl;
		else
			if (Ao == 0)
				cout << Thuc << endl;
			else
				if (Ao > 0)
					cout << Thuc << " + " << Ao << "i" << endl;
				else
					cout << Thuc << " " << Ao << "i" << endl;
}
SoPhuc SoPhuc::Cong(SoPhuc &x) {
	return SoPhuc(Thuc + x.Thuc, Ao + x.Ao);
}
SoPhuc SoPhuc::Tru(SoPhuc &x) {
	return SoPhuc(Thuc - x.Thuc, Ao - x.Ao);
}
SoPhuc SoPhuc::Nhan(SoPhuc &x) {
	return SoPhuc((this->Thuc*x.Thuc + (-1)*this->Ao*x.Ao), (this->Thuc*x.Ao + this->Ao * x.Thuc));
}
SoPhuc SoPhuc::Chia(SoPhuc &x) {
	Thuc = (this->Thuc*x.Thuc + this->Ao * x.Ao) / (x.Thuc*x.Thuc + x.Ao*x.Ao);
	Ao = (this->Ao * x.Thuc - this->Thuc*x.Ao) / ( x.Thuc*x.Thuc + x.Ao*x.Ao);
	return SoPhuc(Thuc, Ao);
}

