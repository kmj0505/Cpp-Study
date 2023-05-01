// 완주하지 못한 선수

// 문제 설명 : 수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.
//			   마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 
//			   완주하지 못한 선수의 이름을 return 하도록 solution 함수를 작성해주세요.


//ex) participant = ["leo", "kiki", "eden"] completion = ["eden", "kiki"] return = "leo",
//	  participant = ["marina", "josipa", "nikola", "vinko", "filipa"] completion = ["josipa", "filipa", "marina", "nikola"]	return = "vinko",
//	  participant = ["mislav", "stanko", "mislav", "ana"] completion = ["stanko", "ana", "mislav"] return = "mislav"

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<string> participant = { "leo", "kiki", "eden" };
    vector<string> completion = {"eden", "kiki"};
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (int i = 0; i < completion.size(); i++)
    {
        if (participant[i] != completion[i])
        {
            answer = participant[i];
            break;
        }
    }
    if (answer == "")
    {
        answer = participant.back();
    }
    cout << answer << endl;
}