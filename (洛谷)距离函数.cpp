#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

// ��������֮��ľ���
double distance(double x1, double y1,double x2,double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	double x1, y1, x2, y2, x3, y3;


	// ���������������
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	// ��������֮��ľ���
	double C1 = distance(x1, y1, x2, y2);
	double C2 = distance(x2, y2, x3, y3);
	double C3 = distance(x1, y1, x3, y3);


	 // ���㲢����ܳ���������λС��

	cout << fixed << setprecision(2) << C1 + C2 + C3;


	return 0;
}