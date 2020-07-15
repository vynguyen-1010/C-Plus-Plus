#include "CDate.h"
#include <iostream>
using namespace std;

int main()
{
	CDate ngay;
	ngay.nhap();
	if (ngay.hopLe()) 
		ngay.in();
	else 
		cout << "NHAP NGAY KHONG HOP LE";
	system("pause");
	return 0;
}