//19. �г� ������

//���� ���� : ������ ������ ���� �������� ���弱������ 1, 2�г� ���л��鿡�� ���翡 �� 
//			����� ��ȭ�� �����شٰ� �Ͽ� �л����� ���翡 �𿴽��ϴ�.
//			������ �¼��� ��ȭ��ó�� ������� �ƴ϶� ������ �ٴڿ� ���ڸ� ��ġ�ϰ� �л����� �ɽ��ϴ�.
//			�׷��� ���� ���ڸ��� ���� Ű�� ū �л��� ������ �� �л����� ����Ű�� ���� ���ڸ� �л��� ��ũ���� ������ �ʽ��ϴ�.
//			�� �ٿ� ����Ű ������ �־����� �޻�� ����� �þ߸� ���� ��ȭ ��û�� �Ұ����ϰ� �ϴ� �г������ڰ� 
//			�� �ٿ� �� ���� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : 10
//		56 46 55 76 65 53 52 53 55 50

//��� : 3


#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, studentHeight;
	int max = 0;
	int cnt = 0;
	
	cin >> N;

	vector<int>height(N);

	for (int i = 0; i < N; i++)
	{
		cin >> height[i];
	}

	for (int i = 0; i < N; i++)
	{
		max = height[i];
		for (int j = i+1; j < N; j++)
		{
			if (max < height[j])
			{
				break;
			}
			else
			{
				if (height[j] == height[N - 1])
				{
					if (max == height[i])
					{
						cnt++;
					}
				}
			}
		}
	}
	cout << cnt;
	return 0;
}