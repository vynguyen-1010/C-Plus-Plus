#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <iomanip>

using namespace std;

#define MAX 100

//Print menu
int printMenu() {
	int choice;
	do
	{
		system("cls");
		cout << "----------Menu----------" << endl;
		cout << "1. Find the larger value in a 1-dimensional of real numbers" << endl;
		cout << "2. Find a location where it has the smallest value in a 1-dimensional array of integer numbers" << endl;
		cout << "3. Check the values in a 1-dimensional array of integer numbers that are even and less than X" << endl;
		cout << "4. Count the number of the prime numbers less than 100 in a 1-dimentional array of integer numbers" << endl;
		cout << "5. Calculate the summary of the negative values in a 1-dimentional array of real numbers" << endl;
		cout << "6. Sort up the 1-dimentional array of real numbers" << endl;
		cout << "7. Enter and print a 1-dimentional array of real numbers" << endl;
		cout << "8. Enter and print a 1-dimentional array of integer numbers" << endl;
		cout << "9. List out all even values in a 1-dimensional array of integer numbers" << endl;
		cout << "10. List out the position of values that are negative in a 1-dimentional array of real numbers" << endl;
		cout << "11. Find the first positive value in a 1-dimensional array of real numbers" << endl;
		cout << "12. Find the last even value in a 1-dimensional array of integer numbers" << endl;
		cout << "13. Find the positions that have the minimum value in a 1-dimensional array of real numbers" << endl;
		cout << "14. Find the first even value in a 1-dimensional array of integer numbers" << endl;
		cout << "15. Find the last perfect number in a 1-dimenstional array of integer numbers" << endl;
		cout << "16. Find the position of the last minimum positive value in a 1-dimensional array of real numbers" << endl;
		cout << "0. Close the program" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			choice = -1;
		}
	} while (choice > 16 || choice < 0);
	return choice;
}

//Check the positive integer
bool isValidNumber(float n) {
	if (n <= 0 || (fmod(n, 1) != 0) || cin.fail() || n > 100) {
		cin.clear();
		cin.ignore();
		return false;
	}
	return true;
}
int enterValidNumber(float n) {
	while (isValidNumber(n) == false) {
		cout << "Please enter the positive integer number less than 2.147.483.647: ";
		cin >> n;
	}
	return (int)n;
}

//Enter random the 1-dimensional array of real numbers
void enterArrayReal(float a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand()%100-50) / 1.1;
	}
}

//Enter random the 1-dimensional array of integer number
void enterArrayInt(int a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 200) - 50;
	}
}

//Print array of real numbers
void printArrayReal(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(3) << a[i] << "\t";
	}
	cout << endl;
}

//Print array of integer numbers
void printArrayInt(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

//Find the larger value in an array of real numbers
float findMax(float a[], int n) {
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

//Find the first position has the smallest value in an array of integer numbers
int findPositionMin(int a[], int n) {
	int pMin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[pMin]) {
			pMin = i;
		}
	}
	return pMin;	
}

//Find the position that has the minimum value in an array of real numbers
int findPositionMinReal(float a[], int n) {
	int pMin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[pMin]) {
			pMin = i;
		}
	}
	return pMin;
}

//Check if a value are even and less than x
bool checkEvenAndLessThanX(int a[], int n, int x) {
	bool isExist = false;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < x)
			isExist = true;
	}
	return isExist;
}

//Check the prime number
bool isPrimeNumber(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count == 2)
		return true;
	else
		return false;
}

bool isPrimeNumberUseFlag(int n) {
	bool flag = true;
	for (int i = 2; i < sqrt(n); i++) {
		flag = false;
	}
	return flag;
}

//Calculate the summary of the negative values in an array of integer numbers
float sumNegative(float a[], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			sum += a[i];
	}
	return sum;
}

//Swap real numbers
void swapReal(float& a, float& b) {
	float m = a;
	a = b;
	b = m;
}

//Sort up an array of real numbers
void sortUpReal(float a[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j])
				swapReal(a[i], a[j]);
		}
	}
}

int findFirstPositivePosition(float a[], int n) {
	int fPos = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0) {
			fPos = i;
			return fPos;
		}
	}
	return fPos;
}

int findLastEvenPosition(int a[], int n) {
	int fLast = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			fLast = i;
		}
	}
	return fLast;
}

int findFirstEvenPosition(int a[], int n) {
	int fFirst = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			fFirst = i;
			return fFirst;
		}
	}
	return fFirst;
}

int main()
{
	int choice;
	choice = printMenu();
	while (choice != 0)
	{
		switch (choice)
		{
		case 1: {
			system("cls");
			cout << "----------1. Find the larger value in a 1-dimensional of real numbers----------" << endl;
			float a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "The larger value: " << findMax(a, n) << endl;		
			break;
		}
		case 2: {
			system("cls");
			cout << "----------2. Find a position where it has the smallest value in a 1-dimensional array of integer numbers----------" << endl;
			int a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			cout << "The positions that has smallest value: " << findPositionMin(a, n) << endl;
			break;
		}
		case 3: {
			system("cls");
			cout << "----------3. Check the values in a 1-dimensional array of integer numbers that are even and less than 10----------" << endl;
			int a[MAX];
			float n;
			cout<<"Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			cout << "Is existing a value that are even and less than 10: ";
			bool isExist = checkEvenAndLessThanX(a, n, 10);
			if (isExist == true)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			break;
		}
		case 4: {
			system("cls");
			cout << "----------4. Count the number of the prime numbers less than 100 in a 1-dimentional array of integer numbers----------" << endl;
			int a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				if (isPrimeNumber(a[i]) && a[i] < 100) {
					count++;
				}
			}
			cout << "The number of the prime numbers less than 100 is: " << count << endl;
			break;
		}
		case 5: {
			system("cls");
			cout << "----------5. Calculate the summary of the negative values in a 1-dimentional array of real numbers----------" << endl;
			float a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			float sum = sumNegative(a, n);
			cout << "The summary of the negative values: " << sum << setprecision(4) << endl;
			break;
		}
		case 6: {
			system("cls");
			cout << "----------6. Sort up the 1-dimentional array of real numbers----------" << endl;
			float a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "Array after sorting up: " << endl;
			sortUpReal(a, n);
			printArrayReal(a, n);
			break;
		}
		case 7: {
			system("cls");
			cout << "----------7. Enter and print a 1-dimentional array of real numbers----------" << endl;
			int n;
			cout << "Enter the number of elements in an array: ";
			cin >> n;
			n = enterValidNumber(n);
			float a[MAX];
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			break;
		}
		case 8: {
			system("cls");
			cout << "----------8. Enter and print a 1-dimentional array of integer numbers----------" << endl;
			int n;
			cout << "Enter the number of elements in an array: ";
			cin >> n;
			n = enterValidNumber(n);
			int a[MAX];
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			break;
		}
		case 9: {
			system("cls");
			cout << "----------9. List out all even values in a 1-dimensional array of integer numbers----------" << endl;
			int a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 == 0)
					cout << a[i] << "\t";
			}
			cout << endl;
			break;
		}
		case 10: {
			system("cls");
			cout << "----------10. List out the position of values that is negative number in a 1-dimentional array of real numbers----------" << endl;
			float a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "The position of values that is negative number: ";
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0) {
					cout << "\na[" << i << "] = " << a[i];
					count++;
				}
			}
			if (count == 0)
				cout << "No negative values in this array";
			cout << endl;
			break;
		}
		case 11: {
			system("cls");
			cout << "----------11. Find the first positive value in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			float n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			int fPositivePosition = findFirstPositivePosition(a, n);
			if (fPositivePosition != -1) {
				cout << "The first positive value is: a[" << fPositivePosition << "] = " << a[fPositivePosition] << endl;
			}
			else {
				cout << "Not found the positive value in the array" << endl;
			}
			break;
		}
		case 12: {
			system("cls");
			cout << "----------12. Find the last even value in a 1-dimensional array of integer numbers----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int lastEvenPosition = findLastEvenPosition(a, n);
			cout << "The last even value is a[" << lastEvenPosition << "] = " << a[lastEvenPosition] << endl;
			break;
		}
		case 13: {
			system("cls");
			cout << "----------13. Find a position that has the minimum value in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "The position that has the minimum value is a[" << findPositionMinReal(a, n) << "] = " << a[findPositionMinReal(a, n)] << endl;
			break;
		}
		case 14: {
			system("cls");
			cout << "----------14. Find the first even value in a 1-dimensional array of integer numbers----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int firstEvenPosition = findFirstEvenPosition(a, n);
			if (firstEvenPosition != -1) {
				cout << "The first even value is a[" << firstEvenPosition << "] = " << a[firstEvenPosition] << endl;
			}
			else {
				cout << "Not found the even value in the array" << endl;
			}
			break;
		}
		default:
			return 0;
		}

		cout << "Do you want to continue the program? Yes/No: ";
		string isContinue;
		cin >> isContinue;
		if (isContinue == "Yes" || isContinue == "yes" || isContinue == "y" || isContinue == "Y") {
			choice = printMenu();
		}
		else if (isContinue == "No" || isContinue == "no" || isContinue == "n" || isContinue == "N") {
			return 0;
		}
		else
		{
			cout << "Cannot recognize your choice!" << endl;
			return 0;
		}
	}

	return 0;
}