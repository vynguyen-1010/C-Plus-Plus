#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

void calculation(int x, int y, int& sumOut, int& minusOut) {
	sumOut = x + y;
	minusOut = x - y;
}

int main() {

#if 0
	
	int a = 1, b = 1;
	int sum, minus;
	calculation(a, b, sum, minus);
	cout << sum << endl;
	cout << minus << endl;

#endif function

#if 0
	cout << "Enter your text: ";
	string strText;
	getline(cin, strText, '_');
	cin.ignore();

	cout << "Enter your name: ";
	string strName;
	getline(cin, strName);

	cout << "Your age is: " << strText << endl;
	cout << "Your name is: " << strName << endl;
#endif Enter text multiple lines

#if 0
	cout << "Enter your age: ";
	string strAge;
	cin >> strAge;
	cin.ignore();

	cout << "Enter your name: ";
	string strName;
	getline(cin, strName);

	cout << "Your age is: " << strAge << endl;
	cout << "Your name is: " << strName << endl;
#endif Enter text multiple lines

#if 0
	string a = "Nguyen";
	string b = "Vy";
	
	string c = a + " " + b;
	cout << "String = " << c << endl;
	cout << "Lenth of string c = " << c.length() << endl;
	cout << "Size of string c = " << c.size() << endl;

#endif Noi chuoi

#if 0
	int n1 = 3;
	int n2 = 2;
	double d = static_cast<double>(n1) / n2;
	cout << static_cast<double>(n1) / n2 << endl;
	cout << static_cast<double>(d) << endl;

#endif static_cast explicit type conversion

#if 0
	int n;
	do
	{
		system("cls");
		cout << "-----------------Menu-----------------" << endl;
		cout << "1. Course A" << endl;
		cout << "2. Course B" << endl;
		cout << "3. Course C" << endl;
		cout << "4. Course D" << endl;
		cout << "5. Course E" << endl;
		cout << "Enter your course number: ";
		cin >> n;
		
		if (cin.fail()) { //kiểm tra xem có bị set failbit or badbit không, nếu có -> error state flag is set for the stream
			cin.clear(); //xóa đi những failbit 
			cin.ignore(); //xóa đi những ký tự trong bộ nhớ đệm
		}
	} while (n < 1 || n>5);
	

	cout << "Your course number is " << n << endl;

#endif do while for menu

#if 0
	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
	}

	for (;;) {
		cout << "10";
		exit(0);
	}
#endif // for loop

#if 0
	//print the even numbers from 0 -> 10
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 != 0) { 
			continue;
		}
		cout << i << endl;
	}

	//print the number from 0 -> 10 except number 5
	int count = 0;
	while (count <= 10) {
		if (count == 5)
			continue;
		cout << count << endl;
		
	}
#endif // continue; keyword

#if 0
	
	//srand(time(NULL)); //could provide time(0)
	//
	////generate a number between 1 and 10
	//int randomNumber = rand() % 10 + 1;

	////Mini game to guess a number
	//int guessNumber;

	//do {
	//	cout << "Enter your guess number: ";
	//	cin >> guessNumber;
	//	if (guessNumber > randomNumber) {
	//		cout << "The secret number is lower" << endl;
	//	}
	//	else if (guessNumber < randomNumber) {
	//		cout << "The secret number is higher" << endl;
	//	}
	//} 
	//while (guessNumber != randomNumber);

	//cout << "Correct! The secret number is " << randomNumber << endl;

	//Use C++ 11
	random_device rd;
	mt19937 rgn(rd());
	uniform_int_distribution<int> uni(1, 100);
	auto n = uni(rgn);
	cout << n << endl;

#endif // a random number

#if 1
	cout << sizeof(int) << endl;
#endif // 1


	return 0;
}