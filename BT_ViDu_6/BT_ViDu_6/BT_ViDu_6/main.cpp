#include <iostream>
# include <conio.h>
# include <stdio.h>
#include "Header.h"
using namespace std;

int main()
{
	cout << "Hello World!\n";
	vt x, z; mt y;
	x.nhap();
	y.nhap();
	cout << "Vec to vua nhap la : ";
	xuat(x);
	cout << "\n Ma tran vua nhap la :\n ";
	xuat(y);
	z = tich(y, x);
	cout << " Tich la : ";
	xuat(z);
	cout << endl;
	system("pause\n");
	return 0;
}