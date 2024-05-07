#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //声明n,m，n代表参赛人数，m代表评委人数
    int n, m;
    cin >> n >> m;

    //声明并初始化为0.0，存储最终结果
    double result = 0.0;

    for (int i = 0; i < n; ++i)         //参赛者评分
    {
        int MaxVal = 0, MinVal = 10;    //最高分不可能为0，最低分不可能为10
        double sum = 0.0;
        
        for (int j = 0; j < m; ++j)     //评委评分
        {
            int score;
            cin >> score;
            sum += score;                       //算出总和
            MaxVal = max(MaxVal, score);        //得出最大值和最小值
            MinVal = min(MinVal, score);
        }
        sum = sum - MaxVal - MinVal;            //减去最大值和最小值
        double avg = sum / (m - 2);             //求平均值
        result = max(result, avg);              //更新最高分
    }

    cout << fixed << setprecision(2) << result;//输出

    return 0;
}