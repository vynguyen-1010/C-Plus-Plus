#pragma once
class CString
{
public:
	int ChieuDai();
	void Xuat();
	int Nhap(char* s);
private:
	int mLength;
	char* mPtr;
};

