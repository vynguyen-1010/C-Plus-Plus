#pragma once
class CTime
{
public:
	void cong(CTime aa, CTime bb);
	void tru(CTime aa, CTime bb);
	void display();
	void getinfo();
private:
	int hours, minutes, seconds;
};

