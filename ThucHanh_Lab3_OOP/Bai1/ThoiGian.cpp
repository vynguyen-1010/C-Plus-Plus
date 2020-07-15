#include "ThoiGian.h"

ThoiGian::ThoiGian() {
	hour = 0;
	min = 0;
	sec = 0;
	sum_second = hour * 3600 + min * 60 + sec;
}

void ThoiGian::Nhap() {
	cout << "Nhap vao thoi gian" << endl;
	cout << "Nhap gio: "; cin >> this->hour;
	cout << "Nhap phut: "; cin >> this->min;
	cout << "Nhap giay: "; cin >> this->sec;
	this->sum_second = this->hour * 3600 + this->min * 60 + this->sec;
	this->hour = this->sum_second / 3600;
	this->min = (this->sum_second % 3600) / 60;
	this->sec = this->sum_second % 60;
}

ThoiGian operator+(ThoiGian a, ThoiGian b)
{
	a.sum_second = a.hour * 3600 + a.min * 60 + a.sec;
	b.sum_second = b.hour * 3600 + b.min * 60 + b.sec;
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
	while (c.sec < 0) {
		c.min -= 1;
		c.sec += 60;
	}
	while (c.min < 0) {
		c.hour -= 1;
		c.min += 60;
	}
	while (c.hour < 0) {
		c.hour = 0; c.min = 0; c.sec = 0;
	}
	return c;
}


ThoiGian operator++(ThoiGian a) {
	a.sum_second = a.hour * 3600 + a.min * 60 + a.sec + 60;
	a.hour = a.laygio();
	a.min = a.layphut();
	a.sec = a.laygiay();
	return a;
}
ThoiGian operator--(ThoiGian a) {
	a.sum_second = a.hour * 3600 + a.min * 60 + a.sec - 60;
	a.hour = a.laygio();
	a.min = a.layphut();
	a.sec = a.laygiay();
	return a;
}


void ThoiGian::Xuat() {
	cout << hour << " gio, " << min << " phut, " << sec << " giay!" << endl;
}

ThoiGian::~ThoiGian() {}