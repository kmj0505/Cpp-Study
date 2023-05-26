//1. 1부터 N까지 M의 배수합

//문제 설명 : 자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을 출력하는 프로그램을 작성하세요.

//입력 : 15 3

//출력 : 45


#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	int N, M;
	int answer = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		if (i % M == 0)
		{
			answer += i;
		}
	}
	cout << answer << endl;
	return 0;
}