#include <iostream>

using namespace std;

int main() 
{
	int year = 0;
	//����һ�����
	cout << "������һ�����" << endl;
	cin >> year;
	//�ж��Ƿ�������
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