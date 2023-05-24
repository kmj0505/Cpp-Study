//3. 진약수의 합

//문제 설명 : 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세요.

//입력 : 20

//출력 : 1+2+4+5+10=22 


#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	cout << 1;
	int answer = 1;
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
