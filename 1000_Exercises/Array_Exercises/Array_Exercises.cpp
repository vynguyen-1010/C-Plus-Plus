#include <iostream>
#include <string>
#include "header.h"
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::string;

#define MAX 100

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