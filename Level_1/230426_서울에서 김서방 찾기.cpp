// ���￡�� �輭�� ã��

// ���� ���� : String�� �迭 seoul�� element�� "Kim"�� ��ġ x�� ã��, "�輭���� x�� �ִ�"�� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���. 
//			   seoul�� "Kim"�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

//ex) seoul = ["Jane", "Kim"], return = "�輭���� 1�� �ִ�"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> seoul = {"Jane", "Kim"};
    string answer = "";
    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            answer = "�輭���� " + to_string(i) + "�� �ִ�";
        }
    }
    cout << answer << endl;
}