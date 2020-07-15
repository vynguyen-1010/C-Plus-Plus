#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class TestPointer {
private:
	int a;
	int b;
public:
	TestPointer();
	TestPointer(int a, int b) {
		this->a = a;
		this->b = b;
	}
	TestPointer& ThietLapGiaTriA(int x)
	{
		a = x;
		return *this;
	}
	TestPointer& ThietLapGiaTriB(int y)
	{
		b = y;
		return *this;

	}
	void HienThi()
	{
		cout << "Gia tri a: " << a << endl;
		cout << "Gia tri b: " << b << endl;
	}
};