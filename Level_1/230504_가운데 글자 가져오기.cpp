// ��� ���� ��������

// ���� ���� : �ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

// ex) s = "abcde" return = "c",
//	   s = "qwer" return = "we"


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    string answer = "";
    cin >> s;
    int size = s.size();
    if (size % 2 == 1)
    {
        answer = s[size / 2];
    }
    else
    {
        for (int i = size / 2 - 1; i <= size / 2; i++)
        {
            answer += s[i];
        }
    }
    cout << answer << endl;
}