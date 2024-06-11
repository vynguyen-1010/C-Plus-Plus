#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "header.h"
using std::cout;
using std::endl;
using std::cin;

#define MAX 100
#define ROW 100
#define COL 100

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

#if 0
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


#endif Enter and print array by functions

#if 0
	
	int a[ROW][COL];
	int row, col;
	enter2DArray(a, row, col);
	print2DArray(a, row, col);
	int iRow = 0;
	cout << "Enter the row you want to calculate summary: ";
	cin >> iRow;
	while (iRow >= row || cin.fail())
	{
		cout << "Please enter the row less than " << row << ": ";
		cin.clear();
		cin.ignore();
		cin >> iRow;
	}
	cout << "Summary of row " << iRow << ": " << sumRow2DArray(a, iRow, col) << endl;

	int iCol = 0;
	cout << "Enter the col you want to calculate summary: ";
	cin >> iCol;
	while (iCol >= col || cin.fail())
	{
		cout << "Please enter the row less than " << col << ": ";
		cin.clear();
		cin.ignore();
		cin >> iCol;
	}
	cout << "Summary of col " << iCol << ": " << sumCol2DArray(a, row, iCol) << endl;
	
#endif two-demensional arrays 

#if 0
	char a[10] = "nGUyen";
	cout << a << endl;
	char des[11] = "Nguyen";
	/*strcpy_s(des, a);
	cout << des << endl;*/
	char con[10] = "vy";
	int n = strlen(a);
	for (int i = 0; i < strlen(con); i++)
	{
		a[n + i] = con[i];
	}
	cout << a << endl;
	//compare array
	int aCount = 0, desCount = 0;

	/*if (strlen(a) > strlen(des)) {
		cout << "a > des" << endl;
	}
	else if (strlen(a) < strlen(des)) {
		cout << "a < des" << endl;
	}
	else {
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] > des[i])
				aCount++;
			if (a[i] < des[i])
				desCount++;
		}
		if (aCount > desCount)
			cout << "a > des" << endl;
		else if (aCount < desCount)
			cout << "a < des" << endl;
		else
			cout << "a = des" << endl;
	}*/

	//find child array
	char child[10] = "Guy";
	int fPos = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (child[0] == a[i]) {
			fPos = i;
			break;
		}			
	}
	for (int i = 0; i < strlen(child); i++)
	{
		for (fPos; fPos < strlen(a); fPos++) {
			if (a[fPos] == child[i]) {
				aCount++;
				break;
			}				
		}
	}
	if (aCount == strlen(child) && aCount !=0 ) {
		cout << "Match!" << endl;
	}
	else
	{
		cout << "Not found!" << endl;
	}

#endif characters array

#if 1
	int x = 3;
	cout << x << endl;
	cout << &x << endl;
#endif // 1






	return 0;
}