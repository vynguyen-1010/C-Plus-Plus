#include <iostream>
#include "TestPointer.h"
using namespace std;

int main()
{
	cout << "Hello World!\n";
	cout << "----------Thong tin doi tuong p-----------" << endl;
	TestPointer p(3, 4);
	p.HienThi();
	cout << "Thong tin doi tuong p sau khi thiet lap gia tri" << endl;
	p.ThietLapGiaTriA(10);
	p.ThietLapGiaTriB(20);
	p.HienThi();

	cout << endl << "----------Thong tin doi tuong p2-----------" << endl;
	TestPointer p2(4, 5);
	p2.HienThi();
	p2.ThietLapGiaTriA(55).ThietLapGiaTriB(67);
	cout << "Thong tin doi tuong p2 sau khi thiet lap gia tri" << endl;
	p2.HienThi();
	system("pause\n");
	return 0;
}
