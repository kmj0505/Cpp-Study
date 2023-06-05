//17. 선생님 퀴즈

//문제 설명 : 현수네 반은 학생이 N명 있습니다. 
//			수업도중 선생님이 잠깐 자리를 비워야 하는데 그 동안 학생들이 떠들거나 놀지 않도록 각 학생들에게 퀴즈를 냈습니다.
//			선생님은 각 학생들에게 숫자가 적힌 카드를 줬습니다.각 학생들은 1부터 자기 카드에 적힌숫자까지의 합을 구하는 퀴즈입니다.
//			선생님이 돌아와서 각 학생들의 답이 맞았는지 확인을 하려고 하는데 너무 힘들어서 
//			여러분에게 자동으로 채점을 하는 프로그램을 부탁했습니다.여러분이 선생님을 도와주세요.

//입력 : 3
//		10 55
//		20 350
//		100 5050


//출력 : YES
//		NO
//		YES


#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	int N, num, studentSum;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		cin >> num >> studentSum;
		for (int j = 1; j <= num; j++)
		{
			sum += j;
		}
		if (sum == studentSum)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}