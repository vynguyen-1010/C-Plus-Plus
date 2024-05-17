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
		cout << "5. Find the larger number among 3 decimal numers a, b, c" << endl;
		cout << "6. Input 2 decimal numbers, check to see if they have the same sign or not" << endl;
		cout << "7. Enter the month of 1 year. Indicate which quarter of the year the month beints to" << endl;
		cout << "8. Calculate summary of S(n) = 1^3 + 2^3 + ... + n^3" << endl;
		cout << "9. Find the smallest positive integer n such that 1 + 2 + ... + n > 10000" << endl;
		cout << "10. Use the for loop to print all characters from A to Z" << endl;
		cout << "0. Close the program" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			choice = -1;
		}
	} while (choice > 10 || choice < 0);
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

//Summary from 1 to n
int sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

//Divisors of n
int a(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
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
			while (isValidNumber(n) == false) {
				cout << "Please enter the positive integer number less than 2.147.483.647: ";
				cin >> n;
			}
			cout << "Summary: " << sum(n) << endl;
			break;
		}
		case 2:
			system("cls");
			cout << "----------2. List all the divisors of the positive integer n----------" << endl;
			cout << "Enter n: ";
			float n;
			cin >> n;
			while (isValidNumber(n) == false) {
				cout << "Please enter the positive integer number less than 2.147.483.647: ";
				cin >> n;
			}
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
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
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


