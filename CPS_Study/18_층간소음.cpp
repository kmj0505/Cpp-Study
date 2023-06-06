//18. 층간소음

//문제 설명 : T편한 세상 아파트는 층간소음 발생 시 윗집의 발뺌을 방지하기 위해 애초 아파트를 지을 때 
//			바닥에 진동센서를 설치했습니다.이 센서는 각 세대의 층간 진동소음 측정치를 초단위로 아파트 관리실에 실시간으로 전송합니다.
//			그리고 한 세대의 측정치가 M값을 넘으면 세대호수와 작은 경보음이 관리실 모니터에서 울립니다.
//			한 세대의 N초 동안의 실시간 측정치가 주어지면 최대 연속으로 경보음이 울린 시간을 구하세요. 경보음이 없으면 - 1를 출력합니다.

//입력 : 10 90
//		23 17 120 34 112 136 123 23 25 113

//출력 : 3


#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	int N, M, nValue;
	int cnt = 0;
	int max = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> nValue;
		if (nValue > M)
		{
			cnt++;
		}
		else
		{
			if (max < cnt)
			{
				max = cnt;
				cnt = 0;
			}
		}
	}
	cout << max << endl;
	return 0;
}