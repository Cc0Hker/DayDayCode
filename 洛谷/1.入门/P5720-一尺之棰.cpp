#include <iostream>
using namespace std;

int main()
{
	int a = 0;		//ľ������
	int day = 1;	//����

	cin >> a;
	while (a != 1)
	{
		a /= 2;
		day++;
	}

	cout << day << endl;

	return 0;
}