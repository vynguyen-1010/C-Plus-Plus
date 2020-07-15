#include <iostream>
using namespace std;
int main()
{
	long thapphan, rem, i = 1, sum = 0;
	cout << "Nhap vao so muon chuyen: ";
	cin >> thapphan;
	do
	{
		rem = thapphan % 2;
		sum = sum + (i*rem);
		thapphan = thapphan / 2;
		i = i * 10;
	} while (thapphan > 0);
	cout << "Ket qua sau khi chuyen sang he nhi phan: " << sum << endl;
	cin.get();

	system("pause");
	return 0;
}