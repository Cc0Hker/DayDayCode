#include <iostream>
using namespace std;

int main()
{
	//生成3个数
	int num = 100;
	do
	{
		//判断水仙花数
		int a = 0;
		int b = 0;
		int c = 0;

		//分别取出个位十位百位
		a = num % 10;				//个位
		b = num / 10 % 10;			//十位
		c = num / 100;				//百位

		if ((a * a * a + b * b * b + c * c * c) == num)
		{
			cout << num << endl;	//打印水仙花数
		}

		num++;
	} while (num < 1000);

	return 0;
}