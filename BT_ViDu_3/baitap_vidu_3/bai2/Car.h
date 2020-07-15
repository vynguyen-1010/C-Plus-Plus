#pragma once
#include <iostream>
#include <conio.h>
#include <string.h>
class Car
{
	/* Định nghĩa lớp */
private:
	int speed; // Tốc độ
	char mark[20]; // Nhãn hiệu
	float price; // Giá xe
public:
	void setSpeed(int); // Gán tốc độ cho xe
	int getSpeed(); // Đọc tốc độ xe
	void setMark(char[] ); // Gán nhãn cho xe
	char* getMark(); // Đọc nhãn xe
	void setPrice(float); // Gán giá cho xe
	float getPrice(); // Đọc giá xe
	void init(int, char[], float); // Khởi tạo thông tin về xe
	void show(); // Giới thiệu xe
};

