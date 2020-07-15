#include "diem.h"
diem::diem()
{
}
void diem::setx(float a)
{
	x = a;
}
void diem::sety(float a)
{
	y = a;
}
float diem::getx()
{
	return x;
}
float diem::gety()
{
	return y;
}
void diem::setxy(float a, float b)
{
	x = a;
	y = b;
}
diem::diem(float a, float b)
{
	x = a; y = b;
}
void diem::nhap()
{
	cout << "\nhoanh do x="; cin >> x;
	cout << "tung do y="; cin >> y;
}
void diem::xuat()
{
	cout << "( " << x << " , " << y << " )";
}
diem::~diem(void)
{
}
void diem::tinhtien(float a, float b)
{
	x += a;
	y += b;
}
void diem::quay(float rad)
{
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}
diem diem::vector(diem a)
{
	diem t;
	t.setx(a.getx() - x);
	t.sety(a.gety() - y);
	return t;
}
