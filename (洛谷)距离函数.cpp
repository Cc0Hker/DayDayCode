#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

// 计算两点之间的距离
double distance(double x1, double y1,double x2,double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	double x1, y1, x2, y2, x3, y3;


	// 输入三个点的坐标
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	// 计算两点之间的距离
	double C1 = distance(x1, y1, x2, y2);
	double C2 = distance(x2, y2, x3, y3);
	double C3 = distance(x1, y1, x3, y3);


	 // 计算并输出周长，保留两位小数

	cout << fixed << setprecision(2) << C1 + C2 + C3;


	return 0;
}