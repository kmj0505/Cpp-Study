//3. ������� ��

//���� ���� : �ڿ��� N�� �־����� �ڿ��� N�� ������� ���� ���İ� �Բ� ����ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : 20

//��� : 1+2+4+5+10=22 


#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int answer = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			if (i < N)
			{
				cout << i;
				if (i < N / 2)
				{
					cout << "+";
				}
				else if (i == N)
				{
					break;
				}
				answer += i;
			}
			else
			{
				cout << "=" << answer << endl;
				break;
			}
		}	
	}
	return 0;
}