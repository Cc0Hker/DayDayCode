#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //初始化t和n
    float t = 0;               //总共毫升数
    int n = 0;                  //同学数量
    int cup = 0;            //杯子数量

    cin >> t >> n;              //输入毫升数和同学数

    cup = n * 2;
    cout << fixed << setprecision(3) << t / n << endl;     //输出每位同学获得的毫升数
    cout << cup << endl;         //输出所需杯子的总数


    return 0;
}