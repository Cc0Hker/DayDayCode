//ð������
#include <iostream>
using namespace std;

int main()
{
	int arr[9] = { 8,9,3,4,2,6,5,0,1 };
	
	//����ǰ
	cout << "����ǰ��" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;

	//���ѭ�������������
	for (int i = 0; i <= 9 - 1; i++)
	{
		//�ڲ�ѭ�����Աȴ���
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

	//�����
	cout << "�����" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;

	return 0;
}
