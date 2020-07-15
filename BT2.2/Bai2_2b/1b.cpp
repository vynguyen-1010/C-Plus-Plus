#include<iostream>
using namespace std;

struct PHANSO
{
	int TS;
	int MS;
};

void NhapPS(PHANSO &x)
{
	cout << "Nhap Tu so: "; cin >> x.TS;
	do
	{
		cout << "Nhap Mau so: ";
		cin >> x.MS;
		if (x.MS == 0)
			cout << "Nhap sai, yeu cau nhap lai mau so: ";
	} while (x.MS == 0);
}
void XuatPS(PHANSO x)
{
	cout << x.TS << "/" << x.MS;
}

void max(PHANSO x1, PHANSO x2) {
	int ps1, ps2;
	ps1 = x1.TS / x1.MS;
	ps2 = x2.TS / x2.MS;
	if (ps1 > ps2) {
		XuatPS(x1);
	}
	else
		XuatPS(x2);
}



int main()
{
	PHANSO ps1, ps2;

	cout << "Nhap phan so" << endl;
	NhapPS(ps1);
	NhapPS(ps2);
	cout << "\nPhan so 1 la: "; XuatPS(ps1);
	cout << "\nPhan so 2 la: "; XuatPS(ps2);
	cout << "\nPhan so lon nhat la: ";
	max(ps1, ps2);


	return 0;
}