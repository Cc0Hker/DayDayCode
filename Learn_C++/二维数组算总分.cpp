//��ά�����ܷ�
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

	string name[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		for (int j = 0; j < 3; j++)
		{
			num += arr[i][j];
		}
		cout << name[i] << "���ܷ���" << num << endl;
	}

	return 0;
}