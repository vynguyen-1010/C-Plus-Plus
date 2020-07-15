#include "dathuc.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


dathuc::dathuc(int bdt)
{
	bacdathuc = bdt;
	heso = new int[bacdathuc + 1];
	for (int i = 0; i <= bacdathuc; i++)
		heso[i] = 0;
}
dathuc::dathuc(const dathuc& dt)
{
	bacdathuc = dt.bacdathuc;
	heso = new int[bacdathuc + 1];
	for (int i = 0; i <= bacdathuc; i++)
		heso[i] = dt.heso[i];
}
const dathuc& dathuc::operator=(const dathuc& dt)
{
	if (*this != dt)
	{
		if (bacdathuc != dt.bacdathuc)
		{
			delete[] heso;
			bacdathuc = dt.bacdathuc;
			heso = new int[bacdathuc];
		}
		for (int i = 0; i <= bacdathuc; i++)
			heso[i] = dt.heso[i];
	}
	return (*this);
}
dathuc dathuc::operator+(const dathuc& add)
{
	int temp;
	temp = ((bacdathuc > add.bacdathuc) ? bacdathuc : add.bacdathuc);
	dathuc d(temp);
	for (int i = 0; i <= temp; i++)
	{
		if (bacdathuc >= i && add.bacdathuc >= i) d.heso[i] = heso[i] + add.heso[i];
		else if (add.bacdathuc < i) d.heso[i] = heso[i];
		else if (bacdathuc < i) d.heso[i] = add.heso[i];
	}
	while (temp > 0 && d.heso[temp] == 0) temp--;
	d.bacdathuc = temp;
	return d;
}
dathuc dathuc::operator-(const dathuc& sub)
{
	int i;
	int temp = (bacdathuc > sub.bacdathuc) ? bacdathuc : sub.bacdathuc;
	dathuc d(temp);
	for (i = 0; i <= temp; i++)
	{
		if (bacdathuc >= i && sub.bacdathuc >= i) d.heso[i] = heso[i] - sub.heso[i];
		else if (sub.bacdathuc < i) d.heso[i] = heso[i];
		else if (bacdathuc < i) d.heso[i] = sub.heso[i];
	}
	return d;
}
dathuc dathuc::operator*(const dathuc& nhan)
{
	int temp;
	temp = bacdathuc + nhan.bacdathuc;
	dathuc d(temp);
	for (int i = 0; i <= bacdathuc; i++)
		for (int j = 0; j <= nhan.bacdathuc; j++)
			d.heso[i + j] = d.heso[i + j] + heso[i] * nhan.heso[j];
	return d;
}
dathuc dathuc::operator/(const dathuc& dt)
{
	int temp;
	if (bacdathuc < dt.bacdathuc) return 0;
	temp = bacdathuc - dt.bacdathuc;
	dathuc d(temp);
	dathuc temp1(*this);
	for (int i = bacdathuc; i >= dt.bacdathuc; i--, temp--)
	{
		d.heso[i - dt.bacdathuc] = temp1.heso[i] / dt.heso[dt.bacdathuc];
		if (i - 1 >= dt.bacdathuc)
		{
			for (int j = i - 1, k = dt.bacdathuc - 1; k >= 0; j--, k--)
				temp1.heso[j] -= d.heso[i - dt.bacdathuc] * dt.heso[k];
		}
	}
	return d;
}
ostream& operator<<(ostream& output, const dathuc& dt)
{
	for (int i = 0; i <= dt.bacdathuc; i++)
		output << setw(3) << dt.heso[i];
	return output;
}
istream& operator>>(istream& input, dathuc& dt)
{
	cout << "\n Bac da thuc n= ";
	cin >> dt.bacdathuc;
	dt.heso = new int[dt.bacdathuc + 1];
	cout << " Nhap he so : ";
	for (int i = 0; i <= dt.bacdathuc; i++)
		input >> dt.heso[i];
	return input;
}