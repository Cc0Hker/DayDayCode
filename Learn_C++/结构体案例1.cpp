#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct Student
{
	string sname;
	int score;
};

struct Teacher
{
	string tname;
	struct Student Sarr[5];
};

void allocate(struct Teacher Tarr[], int len)
{
	string namefor = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; ++i)
	{
		Tarr[i].tname = "Teacher_";
		Tarr[i].tname += namefor[i];

		//ѧ����ֵ
		for (int j = 0; j < 5; ++j)
		{
			Tarr[i].Sarr[j].sname = "Student_";
			Tarr[i].Sarr[j].sname += namefor[j];
			int random = rand() % 61 + 40;	//rand() % n�����ǣ�0 ~ n-1��
			Tarr[i].Sarr[j].score = random;
		}

	}
}

void printTS(struct Teacher Tarr[], int len_p)
{
	for (int i = 0; i < len_p; ++i)
	{
		cout << Tarr[i].tname << endl;
		for (int j = 0; j < 5; ++j)
		{
			cout << "\tstudent_name:" << Tarr[i].Sarr[j].sname << "  score:" << Tarr[i].Sarr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));	//�����

	//����3����ʦ������
	struct Teacher Tarr[3];

	//ͨ����ֵ����������ʦ��ѧ����Ϣ��ֵ
	int len = sizeof(Tarr) / sizeof(Tarr[0]);
	allocate(Tarr, len);

	//��ӡ������ʦ��ѧ����Ϣ
	printTS(Tarr, len);

	return 0;
}