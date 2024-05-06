#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //����n,m��n�������������m������ί����
    int n, m;
    cin >> n >> m;

    //��������ʼ��Ϊ0.0���洢���ս��
    double result = 0.0;

    for (int i = 0; i < n; ++i)         //����������
    {
        int MaxVal = 0, MinVal = 10;    //��߷ֲ�����Ϊ0����ͷֲ�����Ϊ10
        double sum = 0.0;
        
        for (int j = 0; j < m; ++j)     //��ί����
        {
            int score;
            cin >> score;
            sum += score;                       //����ܺ�
            MaxVal = max(MaxVal, score);        //�ó����ֵ����Сֵ
            MinVal = min(MinVal, score);
        }
        sum = sum - MaxVal - MinVal;            //��ȥ���ֵ����Сֵ
        double avg = sum / (m - 2);             //��ƽ��ֵ
        result = max(result, avg);              //������߷�
    }

    cout << fixed << setprecision(2) << result;//���

    return 0;
}