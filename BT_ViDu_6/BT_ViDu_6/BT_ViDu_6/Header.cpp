#include <iostream>
# include <conio.h>
# include <stdio.h>

#include "Header.h"
using namespace std;

void vt::nhap()
{
	cout << " n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void mt::nhap()
{
	int i, j, tg;
	cout << " n = "; cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> tg;
			b[i][j] = tg;
		}
}
void xuat(vt x)
{
	for (int i = 0; i < x.n; i++)
		cout << x.a[i] << "\t";
}
void xuat(mt y)
{
	int i, j;
	for (i = 0; i < y.n; i++)
	{
		for (j = 0; j < y.n; j++)
			cout << y.b[i][j] << "\t";
		cout << "\n";
	}
}
vt tich(mt y, vt x)
{
	vt z;
	z.n = x.n;
	int i, j;
	for (i = 0; i < x.n; i++)
	{
		z.a[i] = 0;
		for (j = 0; j < x.n; j++)
			z.a[i] += x.a[j] * y.b[i][j];
	}
	return z;
}