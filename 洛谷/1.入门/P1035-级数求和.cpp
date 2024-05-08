#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	double Sn = 0.0;
	int k;
	cin >> k;

	for (n; ; n++)
	{
		Sn += 1.0 / n;
		if (Sn > k) break;
	}
	cout << n;

	return 0;
}
