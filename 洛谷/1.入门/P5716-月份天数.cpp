#include <iostream>
using namespace std;

//判断是否是闰年
bool IsLeapYear(int Year)
{
	return ((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0));
}

//判断天数
int DaysInMonth(int Year, int Month)
{
	switch (Month)
	{
		case 2:					//2月
			return IsLeapYear(Year) ? 29 : 28;
		case 4: case 6: case 9: case 11:		//小月
			return 30;
		default:								//大月
			return 31;
	}
}

int main()
{
	//声明年份月份
	int Year, Month;

	//用户输入年份和月份
	cin >> Year >> Month;

	int Days =  DaysInMonth(Year, Month);		//调用函数

	cout << Days << endl;

	return 0;
}