//4. 나이 차이

//문제 설명 : N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 몇 살일까요 ? 최대 나이 차이를 출력하는 프로그램을 작성하세요.

//입력 : 10
//		 13 15 34 23 45 65 33 11 26 42

//출력 : 54



#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int size, min, max, agediff;
	cin >> size;
	vector<int> age(size, 0);
	
	for (int i = 0; i < size; i++)
	{
		cin >> age[i];
		age.push_back(age[i]);
		
	}
	max = age[0];
	min = age[0];
	for (int i = 0; i < size; i++)
	{
		if (max < age[i])
		{
			max = age[i];
		}
		if (min > age[i])
		{
			min = age[i];
		}
		agediff = max - min;
	}
	cout << agediff;
	return 0;
}