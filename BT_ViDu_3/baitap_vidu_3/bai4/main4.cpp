#include "CTime.h"
#include <iostream>
using namespace std;

int main()
{
	CTime one, two, three, four;
	cout << "\n Nhap vao thoi gian mot (gio phut giay): ";
	one.getinfo();
	cout << "\n Nhap vao thoi gian hai (gio phut giay): ";
	two.getinfo();
	three.cong(one, two);
	cout << "Ket qua la cong hai thoi gian la: ";
	three.display();
	four.tru(one, two);
	cout << "Ket qua la cong hai thoi gian la: ";
	four.display();
	system("pause");
	return 0;
}