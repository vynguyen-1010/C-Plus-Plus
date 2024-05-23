#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>

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
		cout << "12. Find the larger number such that 1 + 2 + ... + m < n" << endl;
		cout << "13. Print all the odd positive numbers less than 100" << endl;
		cout << "14. Find the lager divisors of two poitive integer numbers" << endl;
		cout << "15. Check if a number is a prime number or not" << endl;
		cout << "16. Print all the odd numbers less than 100 except 5, 7, and 93" << endl;
		cout << "17. Enter 3 real numbers, replace all negative numbers with their absolute value" << endl;
		cout << "18. Enter x, calculate the value of f(x) = 2x^2 + 5x + 9 while x >= 5, and f(x) = -2x^2 + 4x – 9 while x < 5" << endl;
		cout << "19. Enter 3 sides of a triangle, indicate what triangle it is" << endl;
		cout << "20. Not Done - Solution: ɑx + by = c, dx + ey = f. Coefficients entered from the keyboard" << endl;
		cout << "21. Enter a month and year. Print the days in that month" << endl;
		cout << "22. Enter a day, month, and year. Print the next day" << endl;
		cout << "23. Enter a day, month, and year. Print the day before" << endl;
		cout << "24. Enter a day, month, and year. Calculate what day of the year it is" << endl;
		cout << "25. Enter an integer number with 2 digits. Print the reading of this integer" << endl;
		cout << "26. Enter an integer number with 3 digits. Print the reading of this integer" << endl;
		cout << "27. Calculate S =  Nth root of x" << endl;
		cout << "28. Calculate S = x^y" << endl;
		cout << "29. Print the multiplication table" << endl;
		cout << "30. A total of 200.000 VND is needed from 3 types of banknotes: 1000VND, 2000VND, 5000VND. Find all possible options" << endl;
		cout << "31. Print an isosceles triangle of height h" << endl;
		cout << "32. Print a rectangle with dimensions m x n" << endl;
		cout << "33. Calculate sin(x) with accuracy 0.00001 according to the formula: Sin(x) = x – x^3/3! + x^5/5! + … + (-1)^n . x^2n + 1/(2n + 1)!" << endl;
		cout << "0. Close the program" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			choice = -1;
		}
	} while (choice > 33 || choice < 0);
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

int enterValidIntNumber(float n) {
	while ((fmod(n, 1) != 0) || cin.fail() || n > 2147483647 || n < -2147483648) {
		cin.clear();
		cin.ignore();
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

//Check if a number is a prime number
bool isPrime(int n) {
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

//Calculate the absolute of a number
float absN(float n) {
	if (n < 0)
		n = n * -1;
	return n;
}

//Check if 3 numbers can be a triangle
bool isTriangle(int a, int b, int c) {
	if (absN(a - b) < c && c < (a + b))
		return true;
	return false;
}

//Check the leap year 
bool isLeapYear(int year) {
	if (year % 4 == 0)
		return true;
	return false;
}

int daysInMonth(int month, int year) {
	int days = 0;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		days = 31;
		break;
	}
	case 2: {
		if (year % 4 == 0) {
			days = 29;
		}
		else
		{
			days = 28;
		}
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		days = 30;
		break;
	}
	}
	return days;
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
		case 12: {
			system("cls");
			cout << "----------12. Find the larger number such that 1 + 2 + ... + m < n----------" << endl;
			float n;
			cout << "Enter n: ";
			cin >> n;
			n = enterValidNumber(n);
			cout << "The larger number such that 1 + 2 +...+ m < " << n << " is: ";
			int sum = 0, i = 0;
			while (sum < n)
			{
				i++;
				sum += i;
			}
			cout << --i << endl;
			break;
		}
		case 13: {
			system("cls");
			cout << "----------13. Print all the odd positive numbers less than 100----------" << endl;
			cout << "The odd positive numbers less than 100: " << endl;
			for (int i = 0; i < 100; i++)
			{
				if (i % 2 != 0)
					cout << i << "\t";
			}
			cout << endl;
			break;
		}
		case 14: {
			system("cls");
			cout << "----------14. Find the lager divisors of two poitive integer numbers----------" << endl;
			float a, b;
			cout << "Enter a: ";
			cin >> a;
			a = enterValidNumber(a);
			cout << "\nEnter b: ";
			cin >> b;
			a = enterValidNumber(b);
			cout << "The larger divisors of [" << a << ", " << b << "] is: ";
			break;
		}
		case 15: {
			system("cls");
			cout << "----------15. Check if a number is a prime number or not----------" << endl;
			float n;
			cout << "Enter n: ";
			cin >> n;
			n = enterValidNumber(n);
			if (isPrime(n))
				cout << n << " is a prime number" << endl;
			else
				cout << n << " is not a prime number" << endl;
			break;
		}
		case 16: {
			system("cls");
			cout << "----------16. Print all the odd numbers less than 100 except 5, 7, and 93----------" << endl;
			for (int i = 0; i < 100; i++)
			{
				if (i % 2 != 0 && i != 5 && i != 7 && i != 93)
					cout << i << "\t";
			}
			cout << endl;
			break;
		}
		case 17: {
			system("cls");
			cout << "----------17. Enter 3 real numbers, replace all negative numbers with their absolute value----------" << endl;
			float a, b, c;
			srand(time(NULL));
			a = static_cast<float>(rand() % 10 - 100) / 1.1;
			b = static_cast<float>(rand() % 50 - 50) / 1.1;
			c = static_cast<float>(rand() % 100 - 10) / 1.1;
			cout << "The real numbers are: " << setprecision(4) << a << ", " << b << ", " << c << endl;
			a = absN(a);
			b = absN(b);
			c = absN(c);
			cout << "The absolute values are: " << a << ", " << b << ", " << c << endl;
			break;
		}
		case 18: {
			system("cls");
			cout << "----------18. Enter x, calculate the value of f(x) = 2x^2 + 5x + 9 while x >= 5, and f(x) = -2x^2 + 4x - 9 while x < 5----------" << endl;
			float x;
			cout << "Enter x: ";
			cin >> x;
			x = enterValidIntNumber(x);
			if (x >= 5) {
				cout << "f(" << x << ") = 2x^2 + 5x + 9 = " << 2 * (pow(x, 2)) + 5 * x + 9 << endl;
			}
			else {
				cout << "f(" << x << ") = -2x^2 + 4x – 9 = " << -2 * (pow(x, 2)) + 4 * x - 9 << endl;
			}
			break;
		}
		case 19: {
			system("cls");
			cout << "----------19. Enter 3 sides of a triangle, indicate what triangle it is----------" << endl;
			float a, b, c;
			cout << "Enter the 1st side of the triangle: ";
			cin >> a;
			a = enterValidNumber(a);

			cout << "Enter the 2nd side of the triangle: ";
			cin >> b;
			b = enterValidNumber(b);

			cout << "Enter the 3rd side of the triangle: ";
			cin >> c;
			c = enterValidNumber(c);

			if (isTriangle(a, b, c) == false)
				cout << a << ", " << b << ", " << c << " cannot be a triangle" << endl;
			else if (a == b && b == c)
				cout << "This is an equilateral triangle" << endl;
			else if (((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) && ((a == b) || (a == c) || (b == c)))
				cout << "This is a triangle right angle" << endl;
			else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
				cout << "This is a right angle" << endl;
			else if ((a == b) || (a == c) || (b == c))
				cout << "This is an isosceles triangle" << endl;
			else
				cout << "This is a regular triangle" << endl;
			break;
		}
		case 20: {
			system("cls");
			cout << "----------20. Solution: ɑx + by = c, dx + ey = f. Coefficients entered from the keyboar----------" << endl;
			float a, b, c, d, e, f;
			cout << "Enter a: ";
			cin >> a;
			a = enterValidIntNumber(a);

			cout << "Enter b: ";
			cin >> b;
			b = enterValidIntNumber(b);

			cout << "Enter c: ";
			cin >> c;
			c = enterValidIntNumber(c);

			cout << "Enter d: ";
			cin >> d;
			d = enterValidIntNumber(d);

			cout << "Enter e: ";
			cin >> e;
			e = enterValidIntNumber(e);

			cout << "Enter f: ";
			cin >> f;
			f = enterValidIntNumber(f);
			float y = (d * c / a - f) / (d * b / a - e);
			float x = (c - b * y) / a;
			cout << "The results of the equations \n" << a << "x + " << b << "y = " << c << "\n" << d << "x + " << e << "y = " << f << ": " << endl;
			cout << "x = " << setprecision(4) << x << endl;
			cout << "y = " << setprecision(4) << y << endl;
			break;
		}
		case 21: {
			system("cls");
			cout << "----------21. Enter a month and year. Print the days in that month----------" << endl;
			int month, year;
			cout << "Enter a month: ";
			cin >> month;
			month = enterValidNumber(month);
			while (month > 12)
			{
				cout << "Please enter the valid month, from 1 to 12: ";
				cin >> month;
			}
			cout << "Enter a year: ";
			cin >> year;
			year = enterValidNumber(year);
			cout << "The days in " << month << "/" << year << " is: " << daysInMonth(month, year) << " days" << endl;
			break;
		}
		case 22: {
			system("cls");
			cout << "----------22. Enter a day, month, and year. Print the next day----------" << endl;
			int day, month, year;
			cout << "Enter a day: ";
			cin >> day;
			day = enterValidNumber(day);
			while (day > 31)
			{
				cout << "Please enter the valid month, from 1 to 31: ";
				cin >> day;
			}
			cout << "Enter a month: ";
			cin >> month;
			month = enterValidNumber(month);
			while (month > 12 || (day==31 && (month==2 || month==4 || month==6 || month == 9 || month==11)))
			{
				cout << "Please enter the valid month: ";
				cin >> month;
			}
			cout << "Enter a year: ";
			cin >> year;
			year = enterValidNumber(year);
			while (month == 2 && day == 29 && year % 4 != 0) {
				cout << "Your date is not valid, please enter the other year: ";
				cin >> year;
			}
			int days = 0;
			if (day == 31 && month == 12) {
				day = 1;
				month = 1;
				year++;
			}
			else {
				day++;
				switch (month)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: {
					if (day == 32) {
						day = 1;
						month++;
					}
					break;
				}
				case 2: {
					if (year % 4 == 0) {
						if (day == 30) {
							day = 1;
							month++;
						}
					}
					else
					{
						if (day == 29) {
							day = 1;
							month++;
						}
					}
					break;
				}
				case 4:
				case 6:
				case 9:
				case 11: {
					if (day == 30) {
						day = 1;
						month++;
					}
					break;
				}
				}
			}
			cout << "The next day is: " << day << "/" << month << "/" << year << endl;
			break;
		}
		case 23: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 24: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 25: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 26: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 27: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 28: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 29: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 30: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 31: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 32: {
			system("cls");
			cout << "----------20. ----------" << endl;

			break;
		}
		case 33: {
			system("cls");
			cout << "----------20. ----------" << endl;

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


