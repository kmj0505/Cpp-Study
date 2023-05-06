// x만큼 간격이 있는 n개의 숫자

// 문제 설명 : 함수 solution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스트를 리턴해야 합니다.
//			   다음 제한 조건을 보고, 조건을 만족하는 함수, solution을 완성해주세요.

// ex) x = 2 n = 5 answer = [2, 4, 6, 8, 10],
//	   x = 4 n = 3 answer = [4, 8, 12],
//	   x = - 4 n = 2 answer = [-4, -8]


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int x;
    int n;
    cin >> x >> n;
    vector<long long> answer;
    for (int i = 1; i <= n; i++)
    {
        int y = x * i;
        answer.push_back(y);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
}