#include <iostream>
#include "matran.h"
using namespace std;

int main()
{
	cout << "Hello World!\n";
	matran m;
	cout << "\nNhap ma tran M : \n";
	m.nhap();
	cout << "\nNhap ma tran N : \n";
	matran n;
	cin >> n;
	cout << "\nMa tran M = \n";
	m.xuat();
	cout << "\nMa tran N = \n";
	cout << n;
	matran e = m + n;
	cout << "\nMa tran tong M + N = ";
	e.xuat();
	matran f = m - n;
	cout << "\nMa tran hieu M - N = " << f;
	matran g = m * n;
	cout << "\nMa tran tich M * N = " << g;
	cout << "\nKiem tra phep gan 2 ma tran: H = Ma tran tich?\n";
	matran h = g;
	cout << "\nMa tran H = ";
	cout << h;
	if (h == g)//ham so sanh 2 ma tran
		cout << "\nH == G\n";
	else
		cout << "\nH != G\n";

	system("pause\n");
	return 0;
}
