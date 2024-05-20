#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define MAX 100

void enterArray(int a[], int &n) {
	srand(time(NULL));
	cout << "Enter the number of elements in an array: ";
	cin >> n;
	while (n <= 0 || cin.fail()) {
		cout << "Please enter the positive integer number less than 2.147.478: ";
		cin.clear();
		cin.ignore();
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}
}

//Copy array
int copyArray(int arrDest[], int arrSource[], int n) {
	for (int i = 0; i < n; i++)
	{
		arrDest[i] = arrSource[i];
	}
	return arrDest[n];
}

//Find the first element
void findElement(int a[], int n, int x) {
	int b[MAX];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x) {
			b[count] = i;
			count++;
		}
	}
	if (count != 0) {
		cout << "Your values match these position: " << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "a[" << b[i] << "]" << endl;
		}
	}
	else
	{
		cout << "Not found!" << endl;
	}
}

//Swap
void swap(int &a, int &b) {
	int m = a;
	a = b;
	b = m;
}

//Sort up
void sortUp(int a[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

//Add an element to array
void addElement(int a[], int &n, int idx, int x) {
	while (idx > n || idx < 0) {
		cout << "Please enter the index less than " << n << ": ";
		cin >> idx;
	}
	n += 1;
	for (int i = n-1; i > idx; i--)
	{
		a[i] = a[i - 1];
	}
	a[idx] = x;
}

//Delete an element from array
void deleteElement(int a[], int& n, int idx) {
	while (idx > n - 1 || idx < 0) {
		cout << "Please enter the index less than " << n << ": ";
		cin >> idx;
	}
	for (int i = idx; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	n -= 1;
}

int main() {

#if 0

	//Print array
	//int a[MAX] = { 1,2,3 };
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << a[i] << "\t";
	//}
	//cout << endl;

	////Enter array
	//int arr[MAX];
	//for (int i = 0; i < MAX; i++) {
	//	cout << "Enter a[" << i << "]: ";
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << arr[i] << "\t";
	//}

	//Enter array use random number
	srand(time(NULL));
	int arr[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "\na[" << i << "] = " << rand() % 100 + 1;
	}

#endif Array

#if 1
	int arr[MAX];
	int n;
	enterArray(arr, n);
	printArray(arr, n);

	/*int arrDest[MAX];
	copyArray(arrDest, arr, n);
	cout << "The copied array: " << endl;
	printArray(arrDest, n);*/

	int x;
	cout << "Enter the value that you want to find: ";
	cin >> x;
	findElement(arr, n, x);

	/*sortUp(arr, n);
	cout << "After sorting up: " << endl;
	printArray(arr, n);*/

	/*addElement(arr, n, 3, 10);
	cout << "After adding an element: " << endl;
	printArray(arr, n);*/

	/*deleteElement(arr, n, 5);
	cout << "After deleting an element: " << endl;
	printArray(arr, n);*/



	
	
	



#endif // Enter and print array by functions



	return 0;
}