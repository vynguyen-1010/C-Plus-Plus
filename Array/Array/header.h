#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#define MAX 100
#define ROW 100
#define COL 100

void enterArray(int a[], int& n) {
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
void swap(int& a, int& b) {
	int m = a;
	a = b;
	b = m;
}

//Sort up
void sortUp(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

//Add an element to array
void addElement(int a[], int& n, int idx, int x) {
	while (idx > n || idx < 0) {
		cout << "Please enter the index less than " << n << ": ";
		cin >> idx;
	}
	n += 1;
	for (int i = n - 1; i > idx; i--)
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
	for (int i = idx; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n -= 1;
}

void print2DArray(int a[][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void enter2DArray(int a[][COL], int& row, int& col) {
	srand(time(NULL));
	cout << "Enter the row: ";
	cin >> row;
	while (row <= 0 || cin.fail()) {
		cout << "Please enter the positive integer number less than 2.147.478: ";
		cin.clear();
		cin.ignore();
		cin >> row;
	}
	cout << "Enter the column: ";
	cin >> col;
	while (col <= 0 || cin.fail()) {
		cout << "Please enter the positive integer number less than 2.147.478: ";
		cin.clear();
		cin.ignore();
		cin >> col;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			a[i][j] = rand() % 100 - 20;
		}
	}
}

int sumRow2DArray(int a[][COL], int iRow, int col) {
	int sum = 0;
	for (int i = 0; i < col; i++)
	{
		sum += a[iRow][i];
	}
	return sum;
}

int sumCol2DArray(int a[][COL], int row, int iCol) {
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		sum += a[i][iCol];
	}
	return sum;
}