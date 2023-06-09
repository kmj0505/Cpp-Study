//9. 모두의 약수

//문제 설명 : 자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력하는 프로그램을 작성하세요.
//			만약 N이 8이 입력된다면 1(1개), 2(2개), 3(2개), 4(3개), 5(2개), 6(4개), 7(2개), 8(4개) 와 같이 각 숫자의 약수의 개수가 구해집니다.
//			출력은 다음과 같이 1부터 차례대로 약수의 개수만 출력하면 됩니다.
//			1 2 2 3 2 4 2 4 와 같이 출력한다.

//입력 : 8

//출력 : 1 2 2 3 2 4 2 4


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num;
	int div = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		div = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				div++;
			}
		}
		cout << div << " ";
	}
	return 0;
}