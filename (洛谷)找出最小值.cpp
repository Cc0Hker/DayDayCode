#include <iostream>
using namespace std;
#include <vector>

int main()
{
	int n;          //n������
	cin >> n;

    //����һ��vector���洢n��������
    vector <int> a(n);

    // ��ȡn���Ǹ�����
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // ��ʼ����СֵΪ����ĵ�һ��Ԫ��
    int Minvalue = a[0];

    // �������飬�ҵ���Сֵ
    for (int j = 1; j < n; j++)
    {
        if (a[j] < Minvalue)
        {
            Minvalue = a[j];
        }

    }

    // �����Сֵ
    cout << Minvalue;

	return 0;
}