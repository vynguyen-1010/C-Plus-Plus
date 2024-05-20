#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//Print menu
int printMenu() {
	int choice;
	do
	{
		system("cls");
		cout << "----------Menu----------" << endl;
		cout << "1. Calculate summary of S(n) = 1 + 2 + ... + n" << endl;
		cout << "2. List all the divisors of the positive integer n" << endl;
		cout << "3. Count the number of digits of the positive integer n" << endl;
		cout << "4. Calculate sumary of S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ... + x^n/(1 + 2 + 3 + ... + n)" << endl;
		cout << "5. Find the larger number among 3 decimal numbers a, b, c" << endl;
		cout << "6. Input 2 decimal numbers, check to see if they have the same sign or not" << endl;
		cout << "7. Enter the month of a year. Indicate which quarter of the year the month belongs to" << endl;
		cout << "8. Calculate summary of S(n) = 1^3 + 2^3 + ... + n^3" << endl;
		cout << "9. Find the smallest positive integer n such that 1 + 2 + ... + n > 10000" << endl;
		cout << "10. Use the for loop to print all characters from A to Z" << endl;
		cout << "11. Calculate the summary of the odd positive integer less than n" << endl;
		cout << "0. Close the program" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			choice = -1;
		}
	} while (choice > 11 || choice < 0);
	return choice;
}

//Check the positive integer
bool isValidNumber(float n) {
	if (n <= 0 || (fmod(n, 1) != 0) || cin.fail() || n > 2147483647 || n < -2147483648) {
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

//Summary from 1 to n
int calSum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

//Find the max number
int findMax(int a, int b, int c) {
	int arr[] = { a,b,c };
	int max = arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (max <= arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

//Check the quarter of the month
int checkQuaterOfMonth(int month) {
	int quater = 0;
	switch (month)
	{
	case 1:
	case 2:
	case 3:
		quater = 1;
		break;
	case 4:
	case 5:
	case 6:
		quater = 2;
		break;
	case 7: 
	case 8:
	case 9:
		quater = 3;
		break;
	case 10:
	case 11:
	case 12:
		quater = 4;
		break;
	}
	return quater;
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
			cout << "----------1. Calculate summary of S(n) = 1 + 2 + ... + n----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);
			cout << "Summary: " << calSum(n) << endl;
			break;
		}
		case 2: {
			system("cls");
			cout << "----------2. List all the divisors of the positive integer n----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);
			cout << "The divisors of " << n << ": {";
			for (int i = 1; i <= n; i++)
			{
				if ((int)n % i == 0) {
					cout << i;
					if (i != n)
						cout << ", ";
				}
			}
			cout << "}" << endl;
			break;
		}
		case 3: {
			system("cls");
			cout << "----------3. Count the number of digits of the positive integer n----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);
			int count = 0;
			cout << "The number of digits of " << n << ": ";
			while (n/10 !=0 || (int)n%10 != 0)
			{
				n = (int)n / 10;
				count++;
			}
			cout << count << endl;
			break;
		}
		case 4: {
			system("cls");
			cout << "----------4. Calculate sumary of S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ... + x^n/(1 + 2 + 3 + ... + n)----------" << endl;
			
			cout << "Enter x: ";
			float x;
			cin >> x;
			x = enterValidNumber(x);

			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);

			float sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum += (pow(x, i) / calSum(i));
			}
			cout << "The summary of S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ...: " << (round(sum * 100)) / 100 << endl;
			break;
		}
		case 5: {
			system("cls");
			cout << "----------5. Find the larger number among 3 decimal numbers a, b, c----------" << endl;
			 
			float a, b, c;
			cout << "Enter a: ";
			cin >> a;
			a = enterValidNumber(a);
			
			cout << "Enter b: ";
			cin >> b;
			b = enterValidNumber(b);

			cout << "Enter c: ";
			cin >> c;
			c = enterValidNumber(c);
			
			cout << "The larger number is: " << findMax(a, b, c) << endl;
			break;
		}
		case 6: {
			system("cls");
			cout << "----------6. Input 2 decimal numbers, check to see if they have the same sign or not----------" << endl;
			float a, b;

			cout << "Enter a: ";
			cin >> a;
			while (a == 0)
			{
				cout << "Please enter the decimal number other than 0: ";
				cin >> a;
			}

			cout << "Enter b: ";
			cin >> b;
			while (b == 0)
			{
				cout << "Please enter the decimal number other than 0: ";
				cin >> b;
			}

			cout << (((a > 0 && b > 0) || (a < 0 && b < 0)) ? ("Same sign") : ("Unsame sign")) << endl;
			break;
		}
		case 7: {
			system("cls");
			cout << "----------7. Enter the month of a year. Indicate which quarter of the year the month belongs to----------" << endl;
			float month;
			cout << "Enter the month: ";
			cin >> month;
			while (month > 12 || month < 1 || (fmod(month, 1) != 0) || cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "Please enter the valid month: ";
				cin >> month;
			}
			cout << "The month \"" << month << "\" belongs to the quater: " << checkQuaterOfMonth(month) << endl;
			break;
		}
		case 8: {
			system("cls");
			cout << "----------8. Calculate summary of S(n) = 1^3 + 2^3 + ... + n^3----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);
			int sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum += (pow(i,3));
			}
			cout << "The summary is: " << sum << endl;
			break;
		}
		case 9: {
			system("cls");
			cout << "----------9. Find the smallest positive integer n such that 1 + 2 + ... + n > 10000----------" << endl;
			int i = 0, sum = 0;
			while (sum < 10000)
			{
				i++;
				sum += i;
				
			}
			cout << "The smallest positive integer such that 1 + 2 + ... + n > 10000 is: " << i << endl;
			break;
		}
		case 10: {
			system("cls");
			cout << "----------10. Use the for loop to print all characters from A to Z----------" << endl;
			for (char i = 65; i <= 90; i++)
			{
				cout << i << "\t";
			}
			cout << endl;
			break;
		}
		case 11: {
			system("cls");
			cout << "----------11. Calculate the summary of the odd positive integer less than n----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			n = enterValidNumber(n);
			int sum = 0;
			for (int i = 1; i < n; i++) {
				if (i % 2 != 0)
					sum += i;
			}
			cout << "The summary of the odd positive integer less than " << n << ": " << sum << endl;
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


