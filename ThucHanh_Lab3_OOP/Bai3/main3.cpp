#define Maxsize 10
#include <iostream>
using namespace std;

class stacks
{
public:
	int Top = -1;
	int s[10];
	void push(int);
	void print();
};
void stacks::push(int x)
{
	if (Top == Maxsize)
	{
		cout << "Error : cannot insert";
	}
	else
	{
		Top++;
		s[Top] = x;
	}
}
void stacks::print()
{
	int i;
	cout << "Stack:\t";
	for (i = Top; i >= 0; i--)
	{
		cout << s[i] << "\t";
	}
}
int main() {
	stacks o;
	int n;
	cout << "\nNhap n = ";
	cin >> n;
	int dem;
	cout << n << " = ";
	for (int i = 2; i <= n; i++) {
		dem = 0;
		while (n % i == 0) {
			o.push(i);
			++dem;
			n /= i;
		}
	}	
	for (int m = o.Top; m >=0; m--) {
		if (m == 0) 
			cout << o.s[m];
		else
			cout << o.s[m] << " * ";
	}
	system("pause");
	return 0;
}
