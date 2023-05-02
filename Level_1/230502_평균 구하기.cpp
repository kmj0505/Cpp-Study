// 평균 구하기

// 문제 설명 : 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

//ex) arr = [1,2,3,4] return = 2.5,
//	  arr = [5,5] return = 5

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr = { 1,2,3,4 };
    double sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << sum / arr.size() << endl;
}