#include <iostream>
using namespace std;

int main()
{
	int a = 0;		//木棍长度
	int day = 1;	//天数

	cin >> a;
	while (a != 1)
	{
		a /= 2;
		day++;
	}

	cout << day << endl;

	return 0;
}