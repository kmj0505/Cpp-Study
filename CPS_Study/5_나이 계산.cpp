//5. ���� ���

//���� ���� : �ֹε������ ��ȣ�� �־����� �ֹε���� ������ ���̿� ������ �Ǵ��Ͽ� ����ϴ� ���α׷� �� �ۼ��ϼ���.
//			�ֹε������ ��ȣ�� - �� �������� ���ڸ��� ���ڸ��� ���еȴ�.
//			���ڸ��� ù ��° ���� 1�̸� 1900���� �����̰�, 2�̸� 1900���� ����, 3�̸� 2000���� ����, 4�̸� 2000���� �����̴�.
//			���ش� 2019���Դϴ�.�ش� �ֹε���� ������ ���̿� ������ ����ϼ���.

//�Է� : 780316-2376152

//��� : 42 W



#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	string num, gen;
	cin >> num;

	int age = (num[0] - '0')*10;
	int age1 = num[1] - '0';
	int gender = num[7] - '0';
	
	if (gender == 1)
	{
		gen = "M";
		age = 2019 - ((age + age1) + 1900) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 2)
	{
		gen = "W";
		age = 2019 - ((age + age1) + 1900) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 3)
	{
		gen = "M";
		age = 2019 - ((age + age1) + 2000) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 4)
	{
		gen = "W";
		age = 2019 - ((age + age1) + 2000) + 1;
		cout << age << " " << gen;
	}
	else
	{
		cout << "�߸� �Է��߽��ϴ�.";
	}

	return 0;
}