//11. ������ �� ����(small)

//���� ���� : �ڿ��� N�� �ԷµǸ� 1���� N������ �ڿ����� ���̿� ���� �� �� ���ڴ� �� �� ���������?
//			���� ��� 1���� 15������ 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5����
//			�� 21���� �������� �� �� �ֽ��ϴ�.
//			�ڿ��� N�� �ԷµǸ� 1���� N���� �� ���ڴ� �� ���� ���Ǿ������� ���ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : 15

//��� : 21


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	int cnt = 0;
	cin >> N;

	if (3 <= N && N < 100000)
	{
		for (int i = 1; i <= N; i++)
		{
			string str_num = to_string(i);
			cnt += str_num.length();
		}
		cout << cnt << endl;
	}
	else
	{
		cout << "���ڰ� �߸� �ԷµǾ����ϴ�." << endl;
	}
	return 0;
}
