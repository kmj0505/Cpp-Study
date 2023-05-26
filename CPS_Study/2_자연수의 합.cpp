//2. 자연수의 합

//문제 설명 : 자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요.

//입력 : 3 7

//출력 : 3+4+5+6+7=25 


#include <string>
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