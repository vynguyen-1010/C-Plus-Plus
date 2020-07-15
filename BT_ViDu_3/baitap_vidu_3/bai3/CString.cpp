#include "CString.h"
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
int CString::Nhap(char *s) {
	mLength = strlen(s);
	mPtr = new char[mLength + 1];
	if (mPtr == NULL) return 0;
	strcpy_s(mPtr, 50, s);
	return 1;
}
void CString::Xuat() {
	cout << mPtr;
}
int CString::ChieuDai() {
	return mLength;
}
