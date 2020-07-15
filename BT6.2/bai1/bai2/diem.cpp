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
void diem::tinhtien(diem a)
{
	x += a.x;
	y += a.y;
}

diem diem::vector(diem a)
{
	diem t;
	t.setx(a.getx() - x);
	t.sety(a.gety() - y);
	return t;
}
float diem::khoangcach(diem &a, diem &b) {
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}