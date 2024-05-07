//冒泡排序
#include <iostream>
using namespace std;

int main()
{
	int arr[9] = { 8,9,3,4,2,6,5,0,1 };
	
	//排序前
	cout << "排序前：" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;

	//外层循环，排序的轮数
	for (int i = 0; i <= 9 - 1; i++)
	{
		//内层循环，对比次数
		for (int j = 0; j < (9 - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序后
	cout << "排序后：" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;

	return 0;
}
