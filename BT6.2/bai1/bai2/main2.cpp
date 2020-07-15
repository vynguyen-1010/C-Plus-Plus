#include"tamgiac.h"
int main()
{
	int n;
	do {
		cout << "\nNhap vao so luong tam giac: "; cin >> n;
	} while (n <= 0);
	tamgiac *a = new tamgiac[n];
	a->nhap_n_tamgiac(a, n);
	a->xuat_n_tamgiac(a, n);
	a->tinhtien_n_tamgiac(a, n);
	a->max_chuvi(a, n);
	a->max_dientich(a, n);
	system("pause");
	return 0;
}