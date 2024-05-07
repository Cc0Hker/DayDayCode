#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
    ����:
        map[i][j]��ʾ����(i,j)��ֵ
        0��ʾ�յ�
        1��ʾ����
        2��ʾ����
    ��: map[3][6] = 1  ��ʾ(3,6)��λ���Ǻ���
*/
//int map[19][19];
int map[20][20];

 //��ʾ��ǰ�غ���  ż����ʾ��������  ������ʾ��������
 //��: flag = 20 ��ʾ��ǰ�ǵ�[20]������  �ɺڷ�����
int flag;

void init();
int isWin(int x, int y);
int playerMove(int x, int y);
void menuView();
void gameView_ShowMap();
void winView(int win);
void gameView();
// -------------------- view --------------------

int main()
{
    //�����
    srand((unsigned int)time(NULL));

    menuView();
    return 0;
}


void init() 
{
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            map[i][j] = 0;
        }
    }
    flag = 0;//����
}

int isWin(int x, int y) {
    int count_row = 0;          //��ʼ��һ�еļ���
    int count_col = 0;          //��ʼ��һ�еļ���
    int count_backslash = 0;    //��ʼ����б�ܣ�\������ļ���
    int count_slash = 0;        //��ʼ��б�ܣ�/������ļ���
    for (int i = 0; i < 19; i++)
    {
        if (map[x - 1][i] == map[x - 1][y - 1]) count_row++;  //�����Ƿ��������ͬ������
        else count_row = 0;
        if (map[i][y - 1] == map[x - 1][y - 1]) count_col++;  //�����Ƿ��������ͬ������
        else count_col = 0;

        int diag1 = (x - 1) - (y - 1) + i;
        if (diag1 >= 0 && diag1 < 19 && map[i][diag1] == map[x - 1][y - 1]) count_slash++;      //б�ܷ����Ƿ��������ͬ������
        else count_slash = 0;

        int diag2 = (x - 1) + (y - 1) - i;
        if (diag2 >= 0 && diag2 < 19 && map[i][diag2] == map[x - 1][y - 1]) count_backslash++;  //��б�ܷ����Ƿ��������ͬ������
        else count_backslash = 0;

        if (count_slash == 5 || count_backslash == 5 || count_row == 5 || count_col == 5) return map[x - 1][y - 1];
    }


    return 0;
}

int playerMove(int x, int y) 
{
    int ran = rand() % 2;       //����0��1�����
    if ((x > 19) || (y > 19))
    {
        string arrstr[2] = 
        { {"��ȷ��Ҫ�µ�����������\n"},
            {"�����ⲻ��������Ŷ\n"} 
        };
        cout << "\n*******************************\n";
        cout << arrstr[ran];
        cout << "*******************************\n";

        return 0;
    }
    else if (map[x-1][y-1] != 0)
    {
        cout << "\n*******************************\n";
        cout << "��λ��������������Ŷ" << endl;
        cout << "*******************************\n";

        return 0;
    }
    map[x-1][y-1] = flag % 2 + 1;
    flag++;
    return 1;       //����1��ʾ���ӳɹ�
}

void menuView() 
{
    while (true) {  // �������ѭ���Է��ز˵�
        cout << "1.��ʼ��Ϸ" << endl;
        cout << "2.��Ϸ����" << endl;
        cout << "3.�˳���Ϸ" << endl;
        cout << "4.����" << endl;
        cout << "��ѡ��һ��ѡ� ";

        int option;
        cin >> option;

        if (!(option))
        {
            // �������ʧ�ܣ������û���������ĸ��
            cout << "error��������һ����Ч������ѡ�" << endl;

            cin.clear();                                                // �������״̬

            cin.ignore(numeric_limits<streamsize>::max(), '\n');        // ���Դ�������ֱ����һ��'\n'
            continue; // �����˴�ѭ����ʣ�ಿ�֣����¿�ʼ
        }

        switch (option) {
        case 1:
            gameView();  // ��ʼ��Ϸ
            break;
        case 2:
            cout << "��δ�����������ڴ�������" << endl;     
            break;
        case 3:
            exit(0);  // �˳���������
        case 4:
            system("cls");
        default:
            cout << "*******************************\n";
            cout << "��������ȷ��ѡ��" << endl;
            cout << "*******************************\n";
            break;
        }
    }
}

void gameView_ShowMap() {
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            switch (map[i][j])
            {
            case 0:
                cout << "0 ";
                break;
            case 1:
                cout << "1 ";
                break;
            case 2:
                cout << "2 ";
                break;
            }
        }
        cout << endl;
    }
}

void winView(int win) 
{
    string color;             //�洢��ʤ���ӵ���ɫ
    if (win == 2)
    {
        color = "����";
    }
    else
    {
        color = "����";
    }
    cout << "��ϲ" << color << "��ʤ" << endl;

    cout << "����������ز˵�\n";
    cin.get();              //�ȴ��û����������
    cin.get();
    menuView();             //���ò˵��������������˵�
}

void gameView() {
    init();
    while (1)
    {
        gameView_ShowMap();             //��ӡ��Ϸ����
        int x;
        int y;
        cout << "��ѡ����Ҫ�����λ�ã��� �У���";
        cin >> x >> y;

        // �������ʧ�ܣ������û���������ĸ��

        //if ((x != 0 && y != 0) && (!x || !y))
        if (!x || !y)
        {
            cout << "*******************************\n";
            cout << "error��������һ����Ч������ѡ�\n";
            cout << "*******************************\n";

            cin.clear();                                                // �������״̬

            cin.ignore(numeric_limits<streamsize>::max(), '\n');        // ���Դ�������ֱ����һ��'\n'
            continue; // �����˴�ѭ����ʣ�ಿ�֣����¿�ʼ
        }

        if (!playerMove(x, y))          //����ʧ��
        {
            cout << "������һ�ΰɡ�" << endl;
            continue;
        }
        else
        {
            //�ж��Ƿ�ʤ��
            int win = isWin(x, y);
            if (win == 1 || win == 2)
            {
                winView(win);
                break;
            }
        }

    }

}