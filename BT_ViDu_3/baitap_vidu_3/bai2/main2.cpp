#include "Car.h"
#include <conio.h>
#include <iostream>
using namespace std;
#include <string.h>

int main() {
	system("cls");
	Car myCar; // Khai báo biến lớp// Khởi tạo lần thứ nhất
	cout << "Xe thu nhat : " << endl;
	char a[] = "Ford";
	myCar.init(100, a, 3000);
	cout << "Toc do (km / h) : " << myCar.getSpeed() << endl;
	cout << "Nhan hieu : " << myCar.getMark() << endl;
	cout << "Gia($) : " << myCar.getPrice() << endl;
	// Thay đổi thuộc tính xe
	cout << "Xe thu hai : " << endl;
	myCar.setSpeed(150);
	char b[] = "Mercedes";
	myCar.setMark(b);
	myCar.setPrice(5000);
	myCar.show();
	return 0;
}