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

int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}

	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}

// hàm rút gọn 1 phân số
void Rut_Gon_Phan_So(PHANSO &x)
{
	int ucln = UCLN(x.TS, x.MS);
	x.TS = x.TS / ucln;
	x.MS = x.MS / ucln;
	
}

int main() {
	PHANSO ps;
	cout << "Nhap phan so" << endl;
	NhapPS(ps);
	cout << "Phan so la: "; XuatPS(ps);
	cout << "\nPhan so sau khi rut gon: "; Rut_Gon_Phan_So(ps); XuatPS(ps);
	return 0;
}
