#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	double sumA = 0;		//A���ܺ�
	double sumB = 0;
	int countA = 0;			//A������
	int countB = 0;
	//����
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)		//�ܱ�k����
		{
			sumA += i;
			countA++;
		}
		else
		{
			sumB += i;
			countB++;
		}
	}

	cout << fixed << setprecision(1) << sumA / countA << " " << sumB / countB;

	return 0;
}
