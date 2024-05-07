#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int count = 0;		//计数
	for (int i = 1; i <= n; ++i)
	{
		int temp = i;
		while (temp > 0)
		{
			if (temp % 10 == x)		//个位
				++count;
			temp /= 10;			//十位
		}
	}

	cout << count << endl;

	return 0;
}