//14. ������ �Ҽ�

//���� ���� : N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�.�׷��� 23�� ����Ѵ�.
//			�� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�.ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
//			������ �Լ��� int reverse(int x) �� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ���ۼ��Ͽ� ���α׷��� �Ѵ�.

//�Է� : 5
//		32 55 62 3700 250

//��� : 23 73


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int reverse(int x)
{
	string str = to_string(x);
	reverse(str.begin(), str.end());
	return stoi(str);
}

bool isPrime(int x)
{
	for (int j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			return false;
		}
	}
	return true;
}

int main(void)
{
	int N, num;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		int reverseNum = reverse(num);
		
		if (isPrime(reverseNum))
		{
			cout << reverseNum << " ";
		}
	}
	return 0;
}