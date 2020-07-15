#include<iostream>
using namespace std;
#pragma once
class ThoiGian
{
private:
	int hour;
	int min;
	int sec;
	long sum_second;
public:
	ThoiGian();
	ThoiGian(int a, int b, int c) {
		this->hour = a;
		this->min = b;
		this->sec = c;
		this->sum_second = this->hour * 3600 + this->min * 60 + this->sec;
	}
	
	int chuyensec() { return this->sum_second; }
	int laygio() const{ return sum_second/3600; }
	int layphut() const { return (sum_second%3600) / 60; }
	int laygiay() const { return (sum_second) % 60; }
	friend ThoiGian operator+(ThoiGian a, ThoiGian b);
	friend ThoiGian operator-(ThoiGian a, ThoiGian b);
	friend ThoiGian operator++(ThoiGian a); //++t
	friend ThoiGian operator--(ThoiGian a); //--t
	void Xuat();
	~ThoiGian();
};

