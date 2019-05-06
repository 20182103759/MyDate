// daytiam1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h" 
#include "iostream" 
using namespace std;
class CChenxiaopeng
{
private:
	int month;
	int day;
	int Hour;
	int Minute;
	int Second;
public:
	CChenxiaopeng();
	CChenxiaopeng(int y, int m, int d, int H, int M, int S);
	int setCChenxiaopeng(int y, int m, int d, int H, int M, int S);
	void displayCChenxiaopeng();
};
CChenxiaopeng::CChenxiaopeng()
{
	year = 2019;
	month = 1;
	day = 1;
	Hour = 1;
	Minute = 1;
	Second = 1;
}
CChenxiaopeng::CChenxiaopeng(int y, int m, int d, int H, int M, int S)
{
	year = y;
	month = m;
	day = d;
	Hour = H;
	Minute = M;
	Second = S;
}
int CChenxiaopeng::setCChenxiaopeng(int y, int m, int d, int H, int M, int S)
{
	year = y;
	month = m;
	day = d;
	Hour = H;
	Minute = M;
	Second = S;
	return 0;
}
void CChenxiaopeng::displayCChenxiaopeng()
{
	cout << year << "��" << month << "��" << day << "��" << Hour << "ʱ" << Minute << "��" << Second << "��" << endl;
}
int main()
{
	CChenxiaopeng od;
	od.setCChenxiaopeng(2019, 4, 29, 16, 1, 2);
	od.displayCChenxiaopeng();
	return 0;
}