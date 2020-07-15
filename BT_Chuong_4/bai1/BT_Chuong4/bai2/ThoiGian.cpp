#include "ThoiGian.h"

ThoiGian::ThoiGian(){}

ThoiGian operator+(ThoiGian a, ThoiGian b)
{
	ThoiGian c;	
	c.sum_second = a.sum_second + b.sum_second;
	c.hour = c.laygio();
	c.min = c.layphut();
	c.sec = c.laygiay();
	return c;
}
ThoiGian operator-(ThoiGian a, ThoiGian b)
{
	ThoiGian c;

	c.sum_second = a.sum_second - b.sum_second;
	c.hour = c.laygio();
	c.min = c.layphut();
	c.sec = c.laygiay();
	return c;
}


ThoiGian operator++(ThoiGian a) {
	a.sum_second += 1;
	a.hour = a.laygio();
	a.min = a.layphut();
	a.sec = a.laygiay();
	return a;
}
ThoiGian operator--(ThoiGian a) {
	a.sum_second -= 1;
	a.hour = a.laygio();
	a.min = a.layphut();
	a.sec = a.laygiay();
	return a;
}


void ThoiGian::Xuat() {
	cout << this->hour << " gio, " << this->min << " phut, " << this->sec << " giay!" << endl;
}

ThoiGian::~ThoiGian(){}