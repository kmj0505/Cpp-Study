//3. ������� ��

//���� ���� : �ڿ��� N�� �־����� �ڿ��� N�� ������� ���� ���İ� �Բ� ����ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : 20

//��� : 1+2+4+5+10=22 


#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int answer = N / N;
	cout << answer;
	for (int i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			cout << "+" << i;
			answer += i;
		}
	}
	cout << "=" << answer << endl;
	return 0;
}
