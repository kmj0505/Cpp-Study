// ���� ��ȣ

// ���� ���� : � ������ �� ���ĺ��� ������ �Ÿ���ŭ �о �ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�.
//			   ���� ��� "AB"�� 1��ŭ �и� "BC"�� �ǰ�, 3��ŭ �и� "DE"�� �˴ϴ�."z"�� 1��ŭ �и� "a"�� �˴ϴ�. 
//			   ���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, solution�� �ϼ��� ������.

// ex) s = "AB"	n = 1 result = "BC"
//	   s = "z"	n = 1 result = "a"
//	   s = "a B z"	n = 4 result = "e F d"


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 90) || (s[i] == 122))
        {
            s[i] = s[i] - 26;
        }
        else if (s[i] == 32)
        {
            answer += s[i];
            continue;
        }

        int a = s[i] + n;
        if (((90 < a) && (a < 97)) || (122 < a))
        {
            a = a - 26;
        }
        if ((65 <= s[i]) && (s[i]) <= 90)
        {
            if (a > 90)
            {
                a = a - 26;
            }
        }
        answer += a;
    }
    cout << answer;
}