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
		/*cout << "1. Find the larger value in a 1-dimensional of real numbers" << endl;
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
		cout << "16. Find the position of the last minimum positive value in a 1-dimensional array of real numbers" << endl;*/
		cout << "17. Find the value in the array of real numbers furthest to value x" << endl;
		cout << "18. Find the value in the array of real numbers closest to value x" << endl;
		cout << "19. Find the segment [a, b] such that this segment contains all the values ​​in a 1-dimensional array of real numbers" << endl;
		cout << "20. Find value X such that [-x, x] contains all values in a 1-dimensional array of real numbers" << endl;
		cout << "21. Find the first position that has value more than 50 in a 1-dimensional array of real numbers" << endl;
		cout << "22. Find the last negative position that has value more than -1 in a 1-dimensional array of real numbers" << endl;
		cout << "23. Find the first value within the given range [x, y]" << endl;
		cout << "24. Find a position in a real array that meets 2 conditions: there are 2 neighboring values ​​and the value there is equal to the product of 2 neighboring values" << endl;
		cout << "25. Find the first position that is a square number in a 1-dimensional array of integer numbers" << endl;
		cout << "26. Find the first position that has a value whose first digit is an odd number in a 1-dimensional array of integer number" << endl;
		cout << "27. Find the first position that has a value of form 2^k" << endl;
		cout << "28. Find a value that has all odd digits and is the largest value that satisfies that condition in a 1-dimensional array of integers" << endl;
		cout << "29. Find the largest value in an array of the form 5^k" << endl;
		cout << "30. Find the smallest even number greater than every value in the array" << endl;
		cout << "31. Find the smallest prime number greater than all values ​​in the array" << endl;
		cout << "0. Close the program" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			choice = -1;
		}
	} while (choice > 31 || choice < 0);
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

//Enter a 1-dimensional array of real numbers manual
void enterArrayRealManual(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		cin >> a[i];
	}
}

//Enter random the 1-dimensional array of real numbers
void enterArrayReal(float a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 200 - 50) / 1.1;
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

//Find the position that has the maximum value in an array of real numbers
int findPositionMaxReal(float a[], int n) {
	int pMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[pMax]) {
			pMax = i;
		}
	}
	return pMax;
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

//Find the first postion of a positive value
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

//Find the last position of an even value
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

//Find the first postion of an even value
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

//Check if a number is the perfect number
bool isPerfectNumber(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n && (n > 0))
		return true;
	return false;
}

//Find the last position of a perfect number
int findLastPerfectPosition(int a[], int n) {
	int fPer = -1;
	for (int i = 0; i < n; i++)
		if (isPerfectNumber(a[i]))
			fPer = i;
	return fPer;
}

//Find the last position of the last the minimum positive value
int findLastMinPositivePosition(float a[], int n) {
	int fLast = 0;
	float min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min) {
			min = a[i];
			fLast = i;
		}
	}
	return fLast;
}

//Absolute of a number
float absNum(float n) {
	if (n < 0)
		n *= -1;
	return n;
}

//Find the position that has a value furthest from value X
int findPositionFurthestX(float a[], int n, float x) {
	float diff = 0, nDiff = 0;
	int pos = 0;
	int pMax = findPositionMaxReal(a, n);
	int pMin = findPositionMinReal(a, n);
	if (x > a[pMax])
		diff = x - a[pMax];
	else
		diff = a[pMax] - x;
	if (x > a[pMin])
		nDiff = x - a[pMin];
	else
		nDiff = a[pMin] - x;
	if (diff > nDiff)
		pos = pMax;
	else
		pos = pMin;
	return pos;
}

//Find the position that has a value closest from value X
int findPositionClosestX(float a[], int n, float x) {
	float diff = 0, nDiff = 0;
	if (x > a[0])
		nDiff = x - a[0];
	else
		nDiff = a[0] - x;
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		if (x > a[i])
			diff = x - a[i];
		else
			diff = a[i] - x;
		if (diff < nDiff) {
			nDiff = diff;
			pos = i;
		}
			
	}
	return pos;
}

//Check the first digit is odd
bool isFirstDigitOdd(int n) {
	if (n < 0)
		n *= -1;
	while (n >= 10)
		n /= 10;
	if (n % 2 != 0)
		return true;
	return false;
}

//Check if all digits are odd
bool isAllDigitOdd(int n) {
	if (n < 0)
		n *= -1;
	while (n % 2 != 0) {
		n /= 10;
	}
	if (n >= 10)
		return false;
	return true;
}

//Check if a number has form of x^k
bool isHasFormX(int x, int n) {
	if (n < 0)
		return false;
	while (n > 1) {
		if (n % x != 0)
			return false;
		n /= x;
	}
	return true;
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
		case 15: {
			system("cls");
			cout << "----------15. Find the last perfect number in a 1-dimenstional array of integer numbers----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int fPer = findLastPerfectPosition(a, n);
			if (fPer != -1)
				cout << "The last perfect number is a[" << fPer << "] = " << a[fPer] << endl;
			else
				cout << "There is no perfect number in the array" << endl;
			break;
		}
		case 16: {
			system("cls");
			cout << "----------16. Find the position of the last minimum positive value in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			int fLast = findLastMinPositivePosition(a, n);
			cout << "The last minumum positive value is a[" << fLast << "] = " << a[fLast] << endl;
			break;
		}
		case 17: {
			system("cls");
			cout << "----------17. Find the position that has a value furthest from value X----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "Enter x: ";
			float x;
			cin >> x;
			int pos = findPositionFurthestX(a, n, x);
			cout << "The position that has a value furthest from value " << x << " is a[" << pos << "] = " << a[pos] << endl;
			break;
		}
		case 18: {
			system("cls");
			cout << "----------18. Find the value in the array of real numbers closest to value x----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "Enter x: ";
			float x;
			cin >> x;
			int pos = findPositionClosestX(a, n, x);
			cout << "The position that has a value closest from value " << x << " is a[" << pos << "] = " << a[pos] << endl;
			break;
		}
		case 19: {
			system("cls");
			cout << "----------19. Find the segment [a, b] such that this segment contains all the values ​​in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			cout << "The segment contains all values in this array is [" << a[findPositionMinReal(a, n)] << "; " << a[findPositionMaxReal(a, n)] << "]" << endl;
			break;
		}
		case 20: {
			system("cls");
			cout << "----------20. Find value X such that [-x, x] contains all values in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			float max = absNum(a[findPositionMaxReal(a, n)]);
			float min = absNum(a[findPositionMinReal(a, n)]);
			float x = 0;
			if (max > min)
				x = max;
			else
				x = min;
			cout << "The segment contains all values in this array is [" << -x << "; " << x << "]" << endl;
			break;
		}
		case 21: {
			system("cls");
			cout << "----------21. Find the first position that has value more than 50 in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 50) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The first position that has the value greater than 50 is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found any position meets the requirement" << endl;
			
			break;
		}
		case 22: {
			system("cls");
			cout << "----------22. Find the last negative position that has a value greater than -1 in a 1-dimensional array of real numbers----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0 and a[i]>-1)
					pos = i;
			}
			if (pos != -1)
				cout << "The last negative position that has a value greater than -1 is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found the value meets the requirement" << endl;
			break;
			
		}
		case 23: {
			system("cls");
			cout << "----------23. Find the first value within the given range [x, y]----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int x, y;
			cout << "Enter x: ";
			cin >> x;
			cout << "Enter y: ";
			cin >> y;
			while (x > y) {
				cout << "Please enter y > x: ";
				cin >> y;
			}
			int pos = -1;
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= x && a[i] <= y) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The value within the range[" << x << "; " << y << "] is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found the value meets the requirement" << endl;
			break;
		}
		case 24: {
			system("cls");
			cout << "----------24. Find a position in a real array that meets 2 conditions: there are 2 neighboring values ​​and the value there is equal to the product of 2 neighboring values----------" << endl;
			float a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayReal(a, n);
			//enterArrayRealManual(a, n);
			cout << "Array that just enter: " << endl;
			printArrayReal(a, n);
			int pos = -1;
			for (int i = 1; i < n - 1; i++)
			{
				if (a[i] == a[i - 1] * a[i + 1]) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The position meets the conditions is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found any position meets the conditions" << endl;
			break;
		}
		case 25: {
			system("cls");
			cout << "----------25. Find the first position that is a square number in a 1-dimensional array of integer numbers----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++)
			{
				if (((int)sqrt(a[i]) == sqrt(a[i])) && (a[i] > 0)) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The square number is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found anyt square number in the array" << endl;
			break;
		}
		case 26: {
			system("cls");
			cout << "----------26. Find the first position that has a value whose first digit is an odd number in a 1-dimensional array of integer number----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++) {
				if (isFirstDigitOdd(a[i])) {
					pos = i;
					break;
				}	
			}
			if (pos != -1)
				cout << "The first position that has a value whose first digit is an add number is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found any position meets the requirement" << endl;
			break;
		}
		case 27: {
			system("cls");
			cout << "----------27. Find the first position that has a value of form 2^k----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++) {
				if (isHasFormX(2, a[i])) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The first position that has a value of form 2^k is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found any position meets the requirement" << endl;
			break;
		}
		case 28: {
			system("cls");
			cout << "----------28. Find a value that has all odd digits and is the largest value that satisfies that condition in a 1-dimensional array of integers----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int pos = -1; 
			int max = 0;
			for (int i = 0; i < n; i++) {
				if (isAllDigitOdd(a[i])) {
					pos = i;
				}
			}
			if (pos != 0) {
				for (int i = 0; i < n; i++) {
					if (isAllDigitOdd(a[i])) {
						if (a[i] > a[pos])
							pos = i;
					}
				}
				cout << "The first position that has a value of form 2^k is a[" << pos << "] = " << a[pos] << endl;
			}	
			else
				cout << "Not found any position meets the requirement" << endl;
			break;
		}
		case 29: {
			system("cls");
			cout << "----------29. Find the largest value in an array of the form 5^k----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int pos = -1;
			for (int i = 0; i < n; i++)
			{
				if (isHasFormX(5, a[i])) {
					pos = i;
					break;
				}
			}
			if (pos != -1)
				cout << "The first position that has a value of form 5^k is a[" << pos << "] = " << a[pos] << endl;
			else
				cout << "Not found any position meets the requirement" << endl;
			break;
		}
		case 30: {
			system("cls");
			cout << "----------30. Find the smallest even number greater than every value in the array----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int max = a[0];
			for (int i = 0; i < n; i++)
			{
				if (a[i] > max)
					max = a[i];
			}
			if (max % 2 != 0)
				max++;
			else
				max += 2;
			cout << "The smallest even number greater than every value is " << max << endl;
			break;
		}
		case 31: {
			system("cls");
			cout << "----------31. Find the smallest prime number greater than all values ​​in the array----------" << endl;
			int a[MAX];
			int n;
			cout << "Enter the number of elements: ";
			cin >> n;
			n = enterValidNumber(n);
			enterArrayInt(a, n);
			cout << "Array that just enter: " << endl;
			printArrayInt(a, n);
			int max = a[0];
			for (int i = 0; i < n; i++)
			{
				if (a[i] > max)
					max = a[i];
			}
			while (isPrimeNumber(max) == false)
			{
				max++;
			}
			cout << "The smallest prime number greater than all values is " << max << endl;
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