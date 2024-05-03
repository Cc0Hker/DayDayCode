#include <iostream>
using namespace std;

//�ж��Ƿ�������
bool IsLeapYear(int Year)
{
	return ((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0));
}

//�ж�����
int DaysInMonth(int Year, int Month)
{
	switch (Month)
	{
		case 2:					//2��
			return IsLeapYear(Year) ? 29 : 28;
		case 4: case 6: case 9: case 11:		//С��
			return 30;
		default:								//����
			return 31;
	}
}

int main()
{
	//��������·�
	int Year, Month;

	//�û�������ݺ��·�
	cin >> Year >> Month;

	int Days =  DaysInMonth(Year, Month);		//���ú���

	cout << Days << endl;

	return 0;
}