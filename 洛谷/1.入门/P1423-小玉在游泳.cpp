#include <iostream>
using namespace std;

int main()
{
	double M = 0;		//����
	int Step = 0;	//����
	cin >> M;

	double metre = 0.0, s = 2;	//s��ÿ����Ӿ����
	while (metre < M)
	{
		metre += s;
		s *= 0.98;
		Step++;
	}

	cout << Step;

	return 0;
}