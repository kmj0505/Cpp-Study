//8. �ùٸ� ��ȣ

//���� ���� : ��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� ��YES", �ùٸ��� ������ ��NO"�� ����մϴ�.
//			(())() �̰��� ��ȣ�� ���� �ùٸ��� ��ġ�ϴ� ������, (()()))�� �ùٸ� ��ȣ�� �ƴϴ�

//�Է�1 : (()(()))(()

//���1 : NO

//�Է�2 : ()()(()())

//���2 : YES


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string paren;
	int left = 0;
	int right = 0;

	cin >> paren;

	if ((paren[0] == ')') || (paren[paren.size() - 1] == '('))
	{
		cout << "NO";
	}
	else
	{
		for (int i = 0; i < paren.size(); i++)
		{
			if (paren[i] == '(')
			{
				left++;
			}
			else if (paren[i] == ')')
			{
				right++;
			}
		}
		if (left == right)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	return 0;
}