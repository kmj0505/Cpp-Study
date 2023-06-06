//20. 가위 바위 보

//문제 설명 : A, B 두 사람이 가위바위보 게임을 합니다. 
//			총 N번의 게임을 하여 A가 이기면 A를 출력하고, B가 이기면 B를 출력합니다.
//			비길 경우에는 D를 출력합니다. 가위, 바위, 보의 정보는 1:가위, 2 : 바위, 3 : 보로 정하겠습니다.
//			예를 들어 N = 5이면 A = 2, 3, 3, 1, 3 / B = 1, 1, 2, 2, 3 / 승자 : A, B, A, B, D 입니다.
//			두 사람의 각 회의 가위, 바위, 보 정보가 주어지면 각 회를 누가 이겼는지 출력하는 프로그램을 작성하세요.

//입력 : 5
//		2 3 3 1 3
//		1 1 2 2 3

//출력 : A
//		B
//		A
//		B
//		D


#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N;

	cin >> N;

	vector<int>A(N);
	vector<int>B(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (((A[i] == 1) && (B[i] == 2))||((A[i] == 2) && (B[i] == 3))||((A[i] == 3) && (B[i] == 1)))
		{
			cout << "B" << endl;
		}
		else if (A[i] == B[i])
		{
			cout << "D" << endl;
		}
		else if (((A[i] == 2) && (B[i] == 1))||((A[i] == 3) && (B[i] == 2))||((A[i] == 1) && (B[i] == 3)))
		{
			cout << "A" << endl;
		}
	}
	return 0;
}