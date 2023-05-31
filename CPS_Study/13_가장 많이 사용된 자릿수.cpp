//13. 가장 많이 사용된 자릿수

//문제 설명 : N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프로그램을 작성하세요.
//			예를 들어 1230565625라는 자연수가 입력되면 5가 3번 상용되어 가장 많이 사용된 숫자입니다.
//			답이 여러 개일 경우 그 중 가장 큰 수를 출력하세요.

//입력 : 1230565625

//출력 : 5


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string number;
    cin >> number;
    vector<int> number_cnt(10, 0); // 0부터 9까지의 숫자 개수를 저장할 벡터

    for (char digit : number)
    {
        int num = digit - '0'; // 문자를 숫자로 변환
        number_cnt[num]++; // 해당 숫자 개수 증가
    }

    int max_cnt = number_cnt[0];
    int max_digit = 0;

    for (int i = 1; i < 10; i++)
    {
        if (number_cnt[i] > max_cnt || (number_cnt[i] == max_cnt && i > max_digit))
        {
            max_cnt = number_cnt[i];
            max_digit = i;
        }
    }

    cout << max_digit << endl;

    return 0;
}
