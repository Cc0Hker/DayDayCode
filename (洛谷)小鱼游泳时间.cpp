#include <iostream>
using namespace std;

int main()
{
	int StartHour, Start_Minute, End_Hour, End_Minute;
	int Hour, Minute;
	//输入四个数，分别是开始小时，开始分钟；结束小时，结束分钟
	cin >> StartHour >> Start_Minute >> End_Hour >> End_Minute;
	
	//先将小时化为分钟
	Start_Minute = StartHour * 60 + Start_Minute;
	End_Minute = End_Hour * 60 + End_Minute;

	//得到游泳总分钟
	Minute = End_Minute - Start_Minute;

	//转换为小时分钟格式
	Hour = Minute / 60;
	Minute = Minute % 60;

	//输出
	cout << Hour << " " << Minute << endl;

	return 0;
}
