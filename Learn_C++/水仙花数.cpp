#include <iostream>
using namespace std;

int main()
{
	//����3����
	int num = 100;
	do
	{
		//�ж�ˮ�ɻ���
		int a = 0;
		int b = 0;
		int c = 0;

		//�ֱ�ȡ����λʮλ��λ
		a = num % 10;				//��λ
		b = num / 10 % 10;			//ʮλ
		c = num / 100;				//��λ

		if ((a * a * a + b * b * b + c * c * c) == num)
		{
			cout << num << endl;	//��ӡˮ�ɻ���
		}

		num++;
	} while (num < 1000);

	return 0;
}