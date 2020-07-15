#include "ThoiGian.h"

int main() {

	ThoiGian tg;
	ThoiGian tg1(15, 2, 60);
	ThoiGian tg2(12, 59, 1);
	tg1.Xuat();
	tg2.Xuat();
	cout << "\nChuyen tg1 sang giay: "<< tg1.chuyensec();
	cout << "\nChuyen tg2 sang giay: " << tg2.chuyensec();
	tg = tg1 + tg2;
	cout << "\nTong tg1 + tg2 = "; tg.Xuat();
	tg = tg1 - tg2;
	cout << "\nHieu tg1 - tg2 = "; tg.Xuat();
	tg1 = ++tg1;
	cout << "\n ++tg = "; tg1.Xuat();
	tg2 = --tg2;
	cout << "\n --tg = "; tg2.Xuat();
	system("pause");
	return 0;
}