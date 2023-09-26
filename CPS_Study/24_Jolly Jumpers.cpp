// 24. Jolly Jumpers

// 문제 설명 : N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N-1까지의 값을 모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다.
//          예를 들어 다음과 같은 수열에 서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3 ,2, 1이므로 이 수열은 유쾌한 점퍼가 된다. 
//          어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성하라. 유쾌한 점퍼이면 “YES"를 출력하고, 그렇지 않으면 ”NO"를 출력한다.

// 입력 : 5
//      1 4 2 3 7

// 출력 : YES

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, num;
    vector<int>jolly;
    vector<int>minus;
    
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num;
        jolly.push_back(num);
    }

    for(int i=0; i<N-1; i++){
        if(jolly[i]-jolly[i+1]>N-1){
            cout << "NO" << endl;
            break;
        }
        else{
            if(jolly[i]-jolly[i+1]<0){
                minus.push_back(-(jolly[i]-jolly[i+1]));
            }
            else{
                minus.push_back(jolly[i]-jolly[i+1]);
            }
        }
    }
    sort(minus.begin(), minus.end());
    for(int i=0; i<N-1; i++){
        if(i+1 != minus[i]){
            cout << "NO" << endl;
            break;
        }
        else{
            if(i+1 == N-1){
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
