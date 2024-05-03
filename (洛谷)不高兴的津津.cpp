//不高兴的津津
#include<iostream>
using namespace std;

int main()
{
    int Hours[7] = { 0 };       //存储周一到周日每天的总上课时间
    int MaxUnHappy = -1;        //最不高兴的天数
    int MaxHours = 0;            //最不高兴的总上课时间
    int SchoolHour, MomHour;    //定义学校上课时间和额外时间

    for (int day = 0; day < 7; ++day)
    {
        cin >> SchoolHour >> MomHour;
        Hours[day] = SchoolHour + MomHour;      //每天的总上课小时

        //检查今天是否比之前还不高兴
        if (Hours[day] > MaxHours)
        {
            MaxHours = Hours[day];
            MaxUnHappy = day + 1;
        }
    }
    //输出
    if (MaxHours <= 8)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << MaxUnHappy << endl;     //最不高兴
    }

    return 0;
}