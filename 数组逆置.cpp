#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,3,2,5,4 };

	int temp = 0;
	int arr_num = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = arr_num - 1;

	cout << "����ǰ��" << endl;
	for (int j = 0; j < arr_num; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;

	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	cout << "���ú�" << endl;
	for (int j = 0; j < arr_num; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;

	return 0;
}