#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
    棋盘:
        map[i][j]表示坐标(i,j)的值
        0表示空地
        1表示黑子
        2表示白子
    如: map[3][6] = 1  表示(3,6)的位置是黑子
*/
//int map[19][19];
int map[20][20];

 //表示当前回合数  偶数表示黑棋落子  奇数表示白棋落子
 //如: flag = 20 表示当前是第[20]次落子  由黑方落子
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
    //随机数
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
    flag = 0;//步数
}

int isWin(int x, int y) {
    int count_row = 0;          //初始化一行的计数
    int count_col = 0;          //初始化一列的计数
    int count_backslash = 0;    //初始化反斜杠（\）方向的计数
    int count_slash = 0;        //初始化斜杠（/）方向的计数
    for (int i = 0; i < 19; i++)
    {
        if (map[x - 1][i] == map[x - 1][y - 1]) count_row++;  //此行是否有五个相同的棋子
        else count_row = 0;
        if (map[i][y - 1] == map[x - 1][y - 1]) count_col++;  //此列是否有五个相同的棋子
        else count_col = 0;

        int diag1 = (x - 1) - (y - 1) + i;
        if (diag1 >= 0 && diag1 < 19 && map[i][diag1] == map[x - 1][y - 1]) count_slash++;      //斜杠方向是否有五个相同的棋子
        else count_slash = 0;

        int diag2 = (x - 1) + (y - 1) - i;
        if (diag2 >= 0 && diag2 < 19 && map[i][diag2] == map[x - 1][y - 1]) count_backslash++;  //反斜杠方向是否有五个相同的棋子
        else count_backslash = 0;

        if (count_slash == 5 || count_backslash == 5 || count_row == 5 || count_col == 5) return map[x - 1][y - 1];
    }


    return 0;
}

int playerMove(int x, int y) 
{
    int ran = rand() % 2;       //生成0或1随机数
    if ((x > 19) || (y > 19))
    {
        string arrstr[2] = 
        { {"您确定要下到棋盘外面吗\n"},
            {"棋盘外不可以行棋哦\n"} 
        };
        cout << "\n*******************************\n";
        cout << arrstr[ran];
        cout << "*******************************\n";

        return 0;
    }
    else if (map[x-1][y-1] != 0)
    {
        cout << "\n*******************************\n";
        cout << "此位置上已有棋子了哦" << endl;
        cout << "*******************************\n";

        return 0;
    }
    map[x-1][y-1] = flag % 2 + 1;
    flag++;
    return 1;       //返回1表示落子成功
}

void menuView() 
{
    while (true) {  // 添加无限循环以返回菜单
        cout << "1.开始游戏" << endl;
        cout << "2.游戏设置" << endl;
        cout << "3.退出游戏" << endl;
        cout << "4.清屏" << endl;
        cout << "请选择一个选项： ";

        int option;
        cin >> option;

        if (!(option))
        {
            // 如果输入失败（例如用户输入了字母）
            cout << "error：请输入一个有效的数字选项。" << endl;

            cin.clear();                                                // 清除错误状态

            cin.ignore(numeric_limits<streamsize>::max(), '\n');        // 忽略错误输入直到下一个'\n'
            continue; // 跳过此次循环的剩余部分，重新开始
        }

        switch (option) {
        case 1:
            gameView();  // 开始游戏
            break;
        case 2:
            cout << "暂未开发，敬请期待！！！" << endl;     
            break;
        case 3:
            exit(0);  // 退出整个程序
        case 4:
            system("cls");
        default:
            cout << "*******************************\n";
            cout << "请输入正确的选项" << endl;
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
    string color;             //存储获胜棋子的颜色
    if (win == 2)
    {
        color = "白子";
    }
    else
    {
        color = "黑子";
    }
    cout << "恭喜" << color << "获胜" << endl;

    cout << "按任意键返回菜单\n";
    cin.get();              //等待用户输入任意键
    cin.get();
    menuView();             //调用菜单函数，返回主菜单
}

void gameView() {
    init();
    while (1)
    {
        gameView_ShowMap();             //打印游戏界面
        int x;
        int y;
        cout << "请选择你要行棋的位置（行 列）：";
        cin >> x >> y;

        // 如果输入失败（例如用户输入了字母）

        //if ((x != 0 && y != 0) && (!x || !y))
        if (!x || !y)
        {
            cout << "*******************************\n";
            cout << "error：请输入一个有效的数字选项。\n";
            cout << "*******************************\n";

            cin.clear();                                                // 清除错误状态

            cin.ignore(numeric_limits<streamsize>::max(), '\n');        // 忽略错误输入直到下一个'\n'
            continue; // 跳过此次循环的剩余部分，重新开始
        }

        if (!playerMove(x, y))          //行棋失败
        {
            cout << "请再试一次吧。" << endl;
            continue;
        }
        else
        {
            //判断是否胜利
            int win = isWin(x, y);
            if (win == 1 || win == 2)
            {
                winView(win);
                break;
            }
        }

    }

}