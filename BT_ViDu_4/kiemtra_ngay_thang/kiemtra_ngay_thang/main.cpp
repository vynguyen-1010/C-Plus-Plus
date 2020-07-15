// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "CDate.h"
using namespace std;



int main()
{
	cout << "Hello World!\n";
	CDate ngay;
	ngay.nhap();
	if (ngay.hopLe())
	{
		cout << "Hop le!\n";
		ngay.in();
	}

	else    cout << " NHAP NGAY KHONG HOP LE\n";
	system("pause\n");
	return 0;


}