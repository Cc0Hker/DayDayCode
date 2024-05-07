//二维数组总分
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[3][3] =
	{
		{100,100,100},
		{90,80,40},
		{60,80,70}
	};

	string name[3] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		for (int j = 0; j < 3; j++)
		{
			num += arr[i][j];
		}
		cout << name[i] << "的总分是" << num << endl;
	}

	return 0;
}