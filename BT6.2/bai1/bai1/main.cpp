#include "diem.h"
int main() {
	int n;
	do {
		cout << "\nNhap vao so luong diem: "; cin >> n;
	} while (n <= 0);
	diem *a = new diem[n];
	diem k;
	a->nhap_n_diem(a, n);
	a->xuat_n_diem(a, n);
	//a->tinhtien_n_diem(a, n);
	a->max_kc(a, n);
	system("pause");
	return 0;
}