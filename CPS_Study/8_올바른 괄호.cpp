//8. 올바른 괄호

//문제 설명 : 괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
//			(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다

//입력1 : (()(()))(()

//출력1 : NO

//입력2 : ()()(()())

//출력2 : YES


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