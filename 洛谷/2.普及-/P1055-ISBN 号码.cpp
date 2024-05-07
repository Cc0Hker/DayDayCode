#include <iostream>
#include <string>
using namespace std;

int main()
{
    string isbn;        //要验证的isbn码
    cin >> isbn;

    int check = 0;      //计算识别码
    int j = 1;      //自增

    for (int i = 0; i < isbn.length() - 1; i++)     //isbn.length()输出字符串的长度，-1为最后一位字符
    {
        if (isbn[i] != '-')
        {
            check = check + (isbn[i] - '0') * j;
            j++;
        }
    }
    check %= 11;        //mod11求出识别码

    char lastcheck = check == 10 ? 'X' : '0' + check;       //末尾为10，输出X

    if (lastcheck == isbn[isbn.length() - 1])
    {
        cout << "Right";
    }
    else
    {
        isbn[isbn.length() - 1] = lastcheck;        //修改为正确的识别码
        cout << isbn << endl;
    }

	return 0;
}
