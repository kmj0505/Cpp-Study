// 25. 석차 구하기

// 문제 설명 : N명의 학생의 수학점수가 입력되면 각 학생의 석차를 입력된 순서대로 출력하는 프로그램을 작성하세요.
//      첫 줄에 N(1<=N<=100)이 입력되고, 두 번째 줄에 수학점수를 의미하는 N개의 정수가 입력된 다. 
//      같은 점수가 입력될 경우 높은 석차로 동일 처리한다. 
//      즉 가장 높은 점수가 92점인데 92 점이 3명 존재하면 1등이 3명이고 그 다음 학생은 4등이 된다. 점수는 100점 만점이다.

// 입력 : 5
//      90 85 92 95 90

// 출력 : 3 5 2 1 3

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, num;
    cin >> N;
    vector<int>score(N);
    vector<int>number(N,1);
    


    for(int i=0; i<N; ++i){
        cin >> score[i];
    }

     for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (score[i] < score[j]) {
                number[i]++;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << number[i] << " ";
        if(i == N-1){
            cout << endl;
        }
    }

    return 0;
}
