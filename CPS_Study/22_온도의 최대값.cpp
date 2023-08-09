// 21. 카드 게임

// 문제 설명 : 매일 아침 9시에 학교에서 측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 알아보고자 한다.
//          예를 들어, 다음과 같이 10일 간의 온도가 주어졌을 때, 3 -2 -4 -9 0 3 7 13 8 -3 모든 연속적인 이틀간의 온도의 합은 다음과 같다.
//          1, -6, -13, -9, 3, 10, 20, 21, 5 이때, 온도의 합이 가장 큰 값은 21이다.
//          매일 측정한 온도가 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 계산하는 프로그램을 작성하시오.

// 입력 : 10 2
//      3 -2 -4 -9 0 3 7 13 8 -3

// 출력 : 21

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, D, num;
    int max = 0;
    vector<int>array_num;
    vector<int>array_sum;
    cin >> N >> D;

    for(int i=0; i<N; i++){
        cin >> num;
        array_num.push_back(num);
    }

    for(int i=0; i<N; i++){        
        int sum = 0;
        for(int j=i; j<i+D; j++){
            sum += array_num[j];
            if(j == N){
                break;
            }
            else if (j == i+D-1)
            {
                if(sum > max)
                    max = sum;
                array_sum.push_back(sum);
            }
        }
    }

    cout << max << endl;
    return 0;
}