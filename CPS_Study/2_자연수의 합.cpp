//2. �ڿ����� ��

//���� ���� : �ڿ��� A, B�� �־����� A���� B������ ���� ���İ� �Բ� ����ϼ���.

//�Է� : 3 7

//��� : 3+4+5+6+7=25 


#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	int A, B;
	int answer = 0;
	cin >> A >> B;

	for (int i = A; i <= B; i++)
	{
		cout << i;
		answer += i;
		if (i == B)
		{
			cout << "=" << answer << endl;
			break;
		}
		else
		{
			cout << "+";
		}
	}
	return 0;
}