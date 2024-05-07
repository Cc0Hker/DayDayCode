#include <iostream>
using namespace std;
#include <vector>

int main()
{
	int n;          //n个整数
	cin >> n;

    //创建一个vector来存储n个整数；
    vector <int> a(n);

    // 读取n个非负整数
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // 初始化最小值为数组的第一个元素
    int Minvalue = a[0];

    // 遍历数组，找到最小值
    for (int j = 1; j < n; j++)
    {
        if (a[j] < Minvalue)
        {
            Minvalue = a[j];
        }

    }

    // 输出最小值
    cout << Minvalue;

	return 0;
}