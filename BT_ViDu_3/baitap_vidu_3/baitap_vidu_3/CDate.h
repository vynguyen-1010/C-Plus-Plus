#pragma once
class CDate
{
private:
	int mNgay, mThang, mNam;
	int laNamNhuan(int);
public:
	void nhap();
	int hopLe();
	void in();
};


