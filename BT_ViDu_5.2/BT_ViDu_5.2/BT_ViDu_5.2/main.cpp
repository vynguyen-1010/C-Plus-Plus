#include <iostream>
using namespace std;
#include "dathuc.h"
int main()
{
	cout << "Hello World!\n";
	dathuc dathuc1, dathuc2;
	cout << " Da thuc 1: ";
	cin >> dathuc1;
	cout << " Da thuc 2: ";
	cin >> dathuc2;
	cout << " 2 da thuc da nhap la :\n ";
	cout << dathuc1 << endl;
	cout << dathuc2 << endl;
	cout << "Tong 2 da thuc :\n ";
	cout << dathuc1 << "   + " << dathuc2 << "   = " << dathuc1 + dathuc2 << endl;
	cout << "Hieu 2 da thuc :\n ";
	cout << dathuc1 << "   - " << dathuc2 << "   = " << dathuc1 - dathuc2 << endl;
	cout << "Tich 2 da thuc :\n ";
	cout << dathuc1 << "   * " << dathuc2 << "   = " << dathuc1 * dathuc2 << endl;
	cout << "Thuong 2 da thuc :\n ";
	cout << dathuc1 << "   / " << dathuc2 << "   = " << dathuc1 / dathuc2 << endl;
	system("pause\n");
	return 0;

}
