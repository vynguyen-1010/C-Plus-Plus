#include "Car.h"
#include <conio.h>
#include <iostream>
using namespace std;
#include <string.h>

void Car::setSpeed(int speedIn) // Gán tốc độ cho xe
{
	speed = speedIn;
}

int Car::getSpeed() // Đọc tốc độ xe
{
	return speed;
}

void Car::setMark(char markIn[]) // Gán nhãn cho xe
{
	//strcpy(mark, markIn);
	strcpy_s(mark, 20, markIn);
}

char* Car::getMark() // Đọc nhãn xe
{
	//char *mark1 = mark;
	return mark; 
}
void Car::setPrice(float priceIn) // Gán giá cho xe
{
	price = priceIn;
}
float Car::getPrice() // Đọc giá xe
{
	return price;
}
void Car::init(int speedIn, char markIn[], float priceIn)
{
	speed = speedIn;
	strcpy_s(mark, 20, markIn);
	price = priceIn;
	return;
}
void Car::show() // Phương thức giới thiệu xe
{
	cout << "This is a " << mark << " having a speed of " << speed << "km / h and its price is $" << price << endl;
	return;
}