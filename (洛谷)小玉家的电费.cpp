#include <iostream>
using namespace std;
#include <iomanip>


int main()
{
	int power;			//�õ���
	float cost;			//���


	cin >> power;

	if (power <= 150)
	{
		cost = power * 0.4463;
	}
	else if (power <= 400)
	{
		cost = (150 * 0.4463) + (power - 150) * 0.4663;
	}
	else
	{
		cost = (150 * 0.4463) + (400 - 150) * 0.4663 + (power - 400) * 0.5663;
	}

	cout << fixed << setprecision(1) << cost << endl;		//����һλС��

	return 0;
}