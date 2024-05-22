#include <iostream>

using namespace std;

//Print menu
int printMenu() {
	int choice;
	do
	{
		system("cls");
		cout << "----------Menu----------" << endl;
		cout << "1. Find the larger value in a 1-dimensional of real numbers" << endl;
		cout << "2. Find a location where it has the smallest value in a 1-dimensional array of integer numbers" << endl;
		cout << "3. Check the values in a 1-dimensional array of integer numbers that are even and less than 2004" << endl;
		cout << "4. Count the number of the prime numbers less than 100 in a 1-dimentional array of integer numbers" << endl;
		cout << "5. Calculate the summary of the negavite values in a 1-dimentional array of real numbers" << endl;
		cout << "6. Sort up the 1-dimentional array of real numbers" << endl;
		cout << "7. Enter and print a 1-dimentional array of real numbers" << endl;
		cout << "8. Enter and print a 1-dimentional array of integer numbers" << endl;
		cout << "9. List out all even values in a 1-dimensional array of integer numbers" << endl;
		cout << "10. List out the position of values that are negative in a 1-dimentional array of real numbers" << endl;
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
			
			break;
		}
		case 2: {
			system("cls");
			cout << "----------2. ----------" << endl;
			
			break;
		}
		case 3: {
			system("cls");
			cout << "----------3. ----------" << endl;
			
			break;
		}
		case 4: {
			system("cls");
			cout << "----------4. ----------" << endl;

			break;
		}
		case 5: {
			system("cls");
			cout << "----------5. ----------" << endl;

			break;
		}
		case 6: {
			system("cls");
			cout << "----------6. ----------" << endl;

			break;
		}
		case 7: {
			system("cls");
			cout << "----------7. ----------" << endl;
			
			break;
		}
		case 8: {
			system("cls");
			cout << "----------8. ----------" << endl;
			
			break;
		}
		case 9: {
			system("cls");
			cout << "----------9. ----------" << endl;
			
			break;
		}
		case 10: {
			system("cls");
			cout << "----------10. ----------" << endl;
			
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