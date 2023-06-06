//19. 분노 유발자

//문제 설명 : 오늘은 수능이 끝난 다음날로 교장선생님은 1, 2학년 재학생들에게 강당에 모여 
//			어벤져스 영화를 보여준다고 하여 학생들이 강당에 모였습니다.
//			강당의 좌석은 영화관처럼 계단형이 아니라 평평한 바닥에 의자만 배치하고 학생들이 앉습니다.
//			그런데 만약 앞자리에 앉은 키가 큰 학생이 앉으면 그 학생보다 앉은키가 작은 뒷자리 학생은 스크린이 보이지 않습니다.
//			한 줄에 앉은키 정보가 주어지면 뒷사람 모두의 시야를 가려 영화 시청이 불가능하게 하는 분노유발자가 
//			그 줄에 몇 명이 있는지 구하는 프로그램을 작성하세요.

//입력 : 10
//		56 46 55 76 65 53 52 53 55 50

//출력 : 3


#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, studentHeight;
	int max = 0;
	int cnt = 0;
	
	cin >> N;

	vector<int>height(N);

	for (int i = 0; i < N; i++)
	{
		cin >> height[i];
	}

	for (int i = 0; i < N; i++)
	{
		max = height[i];
		for (int j = i+1; j < N; j++)
		{
			if (max < height[j])
			{
				break;
			}
			else
			{
				if (height[j] == height[N - 1])
				{
					if (max == height[i])
					{
						cnt++;
					}
				}
			}
		}
	}
	cout << cnt;
	return 0;
}