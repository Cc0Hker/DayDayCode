#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student 
{
    string name;
    int Chinese, Math, English, total_score;
};

int main() {
    int N;
    cin >> N;       
    vector<Student> students(N);        //������̬

    int top_index = 0;          //�洢��߷�ѧ��������

    for (int i = 0; i < N; i++) 
    {
        cin >> students[i].name >> students[i].Chinese >> students[i].Math >> students[i].English;

        students[i].total_score = students[i].Chinese + students[i].Math + students[i].English; //���ܺ�

        if (students[i].total_score > students[top_index].total_score)                          //�Ƚ�
        {
            top_index = i;
        }
    }
    // ���
    cout << students[top_index].name << " " << students[top_index].Chinese << " " << students[top_index].Math << " " << students[top_index].English << endl;

    return 0;
}
