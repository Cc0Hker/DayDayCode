//�����˵Ľ��
#include<iostream>
using namespace std;

int main()
{
    int Hours[7] = { 0 };       //�洢��һ������ÿ������Ͽ�ʱ��
    int MaxUnHappy = -1;        //����˵�����
    int MaxHours = 0;            //����˵����Ͽ�ʱ��
    int SchoolHour, MomHour;    //����ѧУ�Ͽ�ʱ��Ͷ���ʱ��

    for (int day = 0; day < 7; ++day)
    {
        cin >> SchoolHour >> MomHour;
        Hours[day] = SchoolHour + MomHour;      //ÿ������Ͽ�Сʱ

        //�������Ƿ��֮ǰ��������
        if (Hours[day] > MaxHours)
        {
            MaxHours = Hours[day];
            MaxUnHappy = day + 1;
        }
    }
    //���
    if (MaxHours <= 8)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << MaxUnHappy << endl;     //�����
    }

    return 0;
}