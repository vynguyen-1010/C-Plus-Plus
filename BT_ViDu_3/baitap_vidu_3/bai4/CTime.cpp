#include "CTime.h"
#include <iostream>
using namespace std;

void CTime::getinfo()
{
	cin >> hours >> minutes >> seconds;
} //ket thuc ham getinfo
void CTime::display()
{
	cout << hours << "h:" << minutes << "m:" << seconds << endl;
} // ket thuc ham display

void CTime::cong(CTime aa, CTime bb)
{
	hours = aa.hours + bb.hours;
	minutes = aa.minutes + bb.minutes;
	seconds = aa.seconds + bb.seconds;
	//kiem tra seconds < 60
	if (seconds >= 60)
	{
		seconds -= 60; // seconds = seconds - 60
		minutes++; //minutes = minutes + 1
	}
	//kiem tra minutes < 60
	if (minutes >= 60)
	{
		minutes -= 60;
		hours++;
	}
}

void CTime::tru(CTime aa, CTime bb)
{
	CTime cc;
	cc.hours = aa.hours - bb.hours;
	cc.minutes = aa.minutes - bb.minutes;
	cc.seconds = aa.seconds - bb.seconds;
	int sum_second;
	sum_second = cc.seconds + cc.hours * 3600 + cc.minutes * 60;
	if (sum_second < 0) {
		hours = 0; minutes = 0; seconds = 0;
	}
	else {
		hours = sum_second / 3600;
		minutes = (sum_second % 3600) / 60;
		seconds = sum_second % 60;
	}	
}