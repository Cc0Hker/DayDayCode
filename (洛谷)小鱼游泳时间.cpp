#include <iostream>
using namespace std;

int main()
{
	int StartHour, Start_Minute, End_Hour, End_Minute;
	int Hour, Minute;
	//�����ĸ������ֱ��ǿ�ʼСʱ����ʼ���ӣ�����Сʱ����������
	cin >> StartHour >> Start_Minute >> End_Hour >> End_Minute;
	
	//�Ƚ�Сʱ��Ϊ����
	Start_Minute = StartHour * 60 + Start_Minute;
	End_Minute = End_Hour * 60 + End_Minute;

	//�õ���Ӿ�ܷ���
	Minute = End_Minute - Start_Minute;

	//ת��ΪСʱ���Ӹ�ʽ
	Hour = Minute / 60;
	Minute = Minute % 60;

	//���
	cout << Hour << " " << Minute << endl;

	return 0;
}
