#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int count = 0;		//����
	for (int i = 1; i <= n; ++i)
	{
		int temp = i;
		while (temp > 0)
		{
			if (temp % 10 == x)		//��λ
				++count;
			temp /= 10;			//ʮλ
		}
	}

	cout << count << endl;

	return 0;
}