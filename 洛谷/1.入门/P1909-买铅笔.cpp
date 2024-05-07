#include <iostream>
using namespace std;

int main()
{
	int pencil_num = 0;
	int pen1_quantity, pen1_price, pen2_quantity, pen2_price, pen3_quantity, pen3_price;

	cin >> pencil_num;				//输入铅笔的数量

	cin >> pen1_quantity >> pen1_price;			//第一种包装铅笔数量和价格
	cin >> pen2_quantity >> pen2_price;			//第二种包装铅笔数量和价格
	cin >> pen3_quantity >> pen3_price;			//第三种包装铅笔数量和价格

	//使用第一种包装的计算结果初始化min_Cost
	int min_Cost = ((pencil_num + pen1_quantity - 1) / pen1_quantity) * pen1_price;
	//计算剩余两种包装的花费，并比较
	int cost2 = ((pencil_num + pen2_quantity - 1) / pen2_quantity) * pen2_price;
	if (cost2 < min_Cost) min_Cost = cost2;

	int cost3 = ((pencil_num + pen3_quantity - 1) / pen3_quantity) * pen3_price;
	if (cost3 < min_Cost) min_Cost = cost3;

	cout << min_Cost << endl;				//输出

	return 0;
}