#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //��ʼ��t��n
    float t = 0;               //�ܹ�������
    int n = 0;                  //ͬѧ����
    int cup = 0;            //��������

    cin >> t >> n;              //�����������ͬѧ��

    cup = n * 2;
    cout << fixed << setprecision(3) << t / n << endl;     //���ÿλͬѧ��õĺ�����
    cout << cup << endl;         //������豭�ӵ�����


    return 0;
}