#include<iostream>
using namespace std;
struct hs
{
	char ten[100];
	float toan, van;
};
void nhap(hs &x);
float dtb(hs x);

void nhap(hs &x)
{
	int kt;
	cout << "NHAP HO TEN: ";
	fflush(stdin); gets_s(x.ten);
	do {
		kt = 0;
		cout << "\nDiem toan: "; cin >> x.toan;
		if (x.toan < 0 || x.toan>10)
		{
			kt = 1; cout << "\nKhong hop le!";
		}
	} while (kt);
	do {
		kt = 0;
		cout << "\nDiem Van: "; cin >> x.van;
		if (x.van < 0 || x.van>10)
		{
			kt = 1; cout << "\nKhong hop le!";
		}
	} while (kt);
}
float dtb(hs x)
{
	return (x.toan + x.van) / 2;
}

int main()
{
	hs x;
	nhap(x);
	cout << "\nDiem Trung Binh: " << dtb(x);
	return 0;
}