#pragma once
#include <string>
using namespace std;

class Candidate
{
private:
	string MS;
	string HoTen;
	int Ngay;
	int Thang;
	int Nam;
	float Toan;
	float Van;
	float Anh;
public:
	void Nhap();
	void Xuat();
	float Tong();


	Candidate();
	~Candidate();
};