#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;              
    cin >> n;

    int num = 1;        //打印的变量
    for (int i = n; i >= 1; --i)        //外层控制行数
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << setw(2) << setfill('0') << num;     //setw函数设置输出宽度，setfill设置填充字符
            num++;
        }
        cout << endl;
    }

    return 0;
}