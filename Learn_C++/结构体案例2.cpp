#include <iostream>
#include <iomanip>

using namespace std;

//����hero�ṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};

//ð�����򣬶���������
void bubbleSort(struct Hero Harr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (Harr[j].age > Harr[j + 1].age)
			{
				struct Hero temp = Harr[j];
				Harr[j] = Harr[j + 1];
				Harr[j + 1] = temp;
			}
		}
	}
}

//ѭ����ӡ����������
void printHero(struct Hero Harr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Harr[i].name << " " << Harr[i].age << " " << Harr[i].sex << endl;
	}
}

int main()
{
	//�������鲢��ֵ
	Hero Harr[5] =
	{
		{"�ŷ�",20,"male"},
		{"����",23,"male"},
		{"����",22,"male"},
		{"����",21,"male"},
		{"����",18,"Famale"}
	};
	
	//����������������
	int len = sizeof(Harr) / sizeof(Harr[0]);
	bubbleSort(Harr, len);

	//�����Ľ����ӡ���
	printHero(Harr, len);
	

	return 0;
}