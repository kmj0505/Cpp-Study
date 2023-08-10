// 23. 연속 부분 증가수열

// 문제 설명 : N개의 숫자가 나열된 수열이 주어집니다. 이 수열 중 연속적으로 증가하는 부분 수열을 최대 길이를 구하여 출력하는 프로그램을 작성하세요.
//          만약 N=9이고 5 7 3 3 12 12 13 10 11 이면 “3 3 12 12 13”부분이 최대 길이 증가수열이므로 그 길이인 5을 출력합니다. 값이 같을 때는 증가하는 걸로 생각합니다.

// 입력 : 9
//      5 7 3 3 12 12 13 10 11

// 출력 : 5

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, number;
    int cnt = 1, max = 0;
    vector<int>num;
    
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> number;
        num.push_back(number);
    }

    for(int i=0; i<N; i++){        
       if(num[i+1]-num[i]>=0){
        cnt++;
        if(cnt>max){
            max = cnt;
        }
       }
       else{
        cnt = 1;
       }
    }

    cout << max << endl;
    return 0;
}
