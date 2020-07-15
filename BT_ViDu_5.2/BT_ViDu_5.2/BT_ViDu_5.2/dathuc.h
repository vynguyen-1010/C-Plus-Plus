#pragma once

#include <iostream>
using namespace std;

class dathuc
{
private:
	int* heso;
	int bacdathuc;
	friend ostream& operator<<(ostream&, const dathuc&); //cout
	friend istream& operator>>(istream&, dathuc&); //cin
public:
	dathuc() { bacdathuc = 0; };
	dathuc(int);
	~dathuc()
	{
		delete[] heso;
	}
	dathuc(const dathuc&);//copy constructer
	const dathuc& operator=(const dathuc&);
	bool operator==(const dathuc& dt)
	{
		if (bacdathuc != dt.bacdathuc) return false;
		else for (int i = 0; i <= bacdathuc; i++)
			if (heso[i] != dt.bacdathuc) return false;
		return true;
	}
	bool operator!=(const dathuc& dt)
	{
		return !(*this == dt);
	}
	dathuc operator+(const dathuc&);
	dathuc operator-(const dathuc&);
	dathuc operator*(const dathuc&);
	dathuc operator/(const dathuc&);

};