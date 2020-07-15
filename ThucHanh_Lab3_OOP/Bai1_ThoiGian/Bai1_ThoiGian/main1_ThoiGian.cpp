#include "ThoiGian.h"

int main() {

	ThoiGian tg, tg1, tg2;
	tg1.Nhap(); cout << "tg1 = "; tg1.Xuat();
	tg2.Nhap(); cout << "tg2 = "; tg2.Xuat();
	tg = tg1 + tg2;
	cout << tg1.chuyensec();
	cout << "\nTong tg1 + tg2 = "; tg.Xuat();
	tg = tg1 - tg2;
	cout << "\nHieu tg1 - tg2 = "; tg.Xuat();
	tg1 = ++tg1;
	cout << "\n ++tg1 = "; tg1.Xuat();
	tg2 = --tg2;
	cout << "\n --tg2 = "; tg2.Xuat();
	system("pause");
	return 0;
}