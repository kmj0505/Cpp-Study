//4. ���� ����

//���� ���� : N(2<=N<=100)���� ���̰� �Էµ˴ϴ�. �� N���� ��� �� ���� �������̰� ���� ���� ���� �� ���ϱ�� ? �ִ� ���� ���̸� ����ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : 10
//		13 15 34 23 45 65 33 11 26 42

//��� : 54



#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int size, min, max, agediff;
	cin >> size;
	vector<int> age(size);
	
	for (int i = 0; i < size; i++)
	{
		cin >> age[i];
		age.push_back(age[i]);
		
	}
	max = age[0];
	min = age[0];
	for (int i = 0; i < size; i++)
	{
		if (max < age[i])
		{
			max = age[i];
		}
		if (min > age[i])
		{
			min = age[i];
		}
		agediff = max - min;
	}
	cout << agediff;
	return 0;
}