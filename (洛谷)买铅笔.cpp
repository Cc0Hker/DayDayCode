#include <iostream>
using namespace std;

int main()
{
	int pencil_num = 0;
	int pen1_quantity, pen1_price, pen2_quantity, pen2_price, pen3_quantity, pen3_price;

	cin >> pencil_num;				//����Ǧ�ʵ�����

	cin >> pen1_quantity >> pen1_price;			//��һ�ְ�װǦ�������ͼ۸�
	cin >> pen2_quantity >> pen2_price;			//�ڶ��ְ�װǦ�������ͼ۸�
	cin >> pen3_quantity >> pen3_price;			//�����ְ�װǦ�������ͼ۸�

	//ʹ�õ�һ�ְ�װ�ļ�������ʼ��min_Cost
	int min_Cost = ((pencil_num + pen1_quantity - 1) / pen1_quantity) * pen1_price;
	//����ʣ�����ְ�װ�Ļ��ѣ����Ƚ�
	int cost2 = ((pencil_num + pen2_quantity - 1) / pen2_quantity) * pen2_price;
	if (cost2 < min_Cost) min_Cost = cost2;

	int cost3 = ((pencil_num + pen3_quantity - 1) / pen3_quantity) * pen3_price;
	if (cost3 < min_Cost) min_Cost = cost3;

	cout << min_Cost << endl;				//���

	return 0;
}