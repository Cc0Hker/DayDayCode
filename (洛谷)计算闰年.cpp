#include <iostream>

using namespace std;

int main() 
{
	int year = 0;
	//输入一个年份
	cout << "请输入一个年份" << endl;
	cin >> year;
	//判断是否是闰年
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}

	return 0;
}