// 나누어 떨어지는 숫자 배열

// 문제 설명 : array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
//             divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 - 1을 담아 반환하세요.

//ex) arr = [5,9,7,10] divisor = 5 return = [5,10],
//	  arr = [2,36,1,3] divisor = 1 return = [1,2,3,36],
//	  arr = [3,2,6] divisor = 10 return = [-1]

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr = { 5,9,7,10 };
    int divisor = 5;
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    else
    {
        sort(answer.begin(), answer.end());
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
}