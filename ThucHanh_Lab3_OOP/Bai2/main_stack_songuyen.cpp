#define Maxsize 10
#include <iostream>
using namespace std;
class stacks
{
public:
	int Top = -1;
	int s[10];
	void push(int);
	void pop();
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
void stacks::pop()
{
	if (Top < 0)
	{
		cout << "Error : cannot delete";
	}
	else
	{
		Top--;
		return;
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

int main()
{
	stacks o;
	int e, i;
	for (i = 0; i < 5; i++)
	{
		cout << "Nhap vao vi tri " << i + 1 << ": ";
		cin >> e;
		o.push(e);
	}
	o.print();

	cout << "\nStack sau khi xoa dinh" << endl;
	o.pop();
	o.print();
	cout << "\nThem phan tu cho stack" << endl;
	cin >> e;
	o.push(e);
	o.print();
	system("pause");
	return 0;
}