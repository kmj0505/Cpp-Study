//15. 소수의 개수

//문제 설명 : 자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력하는 프로그램을 작성하세요. 
//			만약 20이 입력되면 1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19로 총 8개입니다.
//			제한시간은 1초입니다.

//입력 : 20

//출력 : 8


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    int cnt = 0;

    cin >> N;

    for (int i = 2; i < N; i++)
    {
        if (isPrime(i) == true)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
