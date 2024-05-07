#include <iostream>
#include <string>
using namespace std;

int main()
{
    string isbn;        //Ҫ��֤��isbn��
    cin >> isbn;

    int check = 0;      //����ʶ����
    int j = 1;      //����

    for (int i = 0; i < isbn.length() - 1; i++)     //isbn.length()����ַ����ĳ��ȣ�-1Ϊ���һλ�ַ�
    {
        if (isbn[i] != '-')
        {
            check = check + (isbn[i] - '0') * j;
            j++;
        }
    }
    check %= 11;        //mod11���ʶ����

    char lastcheck = check == 10 ? 'X' : '0' + check;       //ĩβΪ10�����X

    if (lastcheck == isbn[isbn.length() - 1])
    {
        cout << "Right";
    }
    else
    {
        isbn[isbn.length() - 1] = lastcheck;        //�޸�Ϊ��ȷ��ʶ����
        cout << isbn << endl;
    }

	return 0;
}
