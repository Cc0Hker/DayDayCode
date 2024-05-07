#include <iostream>
using namespace std;

int main()
{
	double M = 0;		//距离
	int Step = 0;	//步数
	cin >> M;

	double metre = 0.0, s = 2;	//s是每次游泳距离
	while (metre < M)
	{
		metre += s;
		s *= 0.98;
		Step++;
	}

	cout << Step;

	return 0;
}