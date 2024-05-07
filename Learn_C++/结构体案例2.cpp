#include <iostream>
#include <iomanip>

using namespace std;

//创建hero结构体
struct Hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序，对数组排序
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

//循环打印排序后的数据
void printHero(struct Hero Harr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Harr[i].name << " " << Harr[i].age << " " << Harr[i].sex << endl;
	}
}

int main()
{
	//创建数组并赋值
	Hero Harr[5] =
	{
		{"张飞",20,"male"},
		{"刘备",23,"male"},
		{"关羽",22,"male"},
		{"赵云",21,"male"},
		{"貂蝉",18,"Famale"}
	};
	
	//按照年龄升序排序
	int len = sizeof(Harr) / sizeof(Harr[0]);
	bubbleSort(Harr, len);

	//排序后的结果打印输出
	printHero(Harr, len);
	

	return 0;
}