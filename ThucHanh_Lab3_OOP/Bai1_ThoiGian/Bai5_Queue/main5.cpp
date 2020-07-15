#define Maxsize 10
#include <iostream>
using namespace std;
class queue
{
public:
	int Top = -1;
	int s[10];
	void push(int);
	void pop();
	void print();
};
void queue::push(int x)
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
void queue::pop()
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
void queue::print()
{
	int i;
	cout << "Queue:\t";
	for (i = 0; i <=Top; i++)
	{
		cout << s[i] << "\t";
	}
}

int main()
{
	queue o;
	int e, i;
	for (i = 0; i < 5; i++)
	{
		cout << "Nhap vao vi tri " << i + 1 << ": ";
		cin >> e;
		o.push(e);
	}
	o.print();

	/*cout << "\nQueue sau khi xoa dinh" << endl;
	o.pop();
	o.print();*/
	cout << "\nThem phan tu cho queue" << endl;
	cin >> e;
	o.push(e);
	o.print();
	system("pause");
	return 0;
}