// �������� ���� ����

// ���� ���� : ������ ������ �������� �����濡 �����Ͽ����ϴ�. �� �� ���� ������ �����ϰ�� ��� ������ �������� �����Ͽ����ϴ�.
//			   �����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, 
//			   �������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.


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