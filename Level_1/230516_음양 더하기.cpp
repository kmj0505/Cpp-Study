//음양 더하기

// 문제 설명 : 어떤 정수들이 있습니다. 이 정수들의 절댓값을 차례대로 담은 정수 배열 absolutes와 이 정수들의 부호를 차례대로 담은 불리언 배열 signs가 매개변수로 주어집니다.
//			   실제 정수들의 합을 구하여 return 하도록 solution 함수를 완성해주세요.

// ex) absolutes = [4, 7, 12] signs	= [true, false, true] result = 9
//	   absolutes = [1, 2, 3] signs = [false, false, true] result = 0


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> absolutes = { 4, 7, 12 };
    vector<bool> signs = { true, false, true };
    int answer = 0;
    for (int i = 0; i < signs.size(); i++)
    {
        if (signs[i] == 0)
        {
            absolutes[i] = -(absolutes[i]);
        }
        answer += absolutes[i];
    }
    cout << answer << endl;
}