// ���ڿ� �ٷ�� �⺻

// ���� ���� : ���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. 
//			   ���� ��� s�� "a234"�̸� False�� �����ϰ� "1234"��� True�� �����ϸ� �˴ϴ�.

// ex) s = "s234" return = false,
//	   s = "1234" return = true


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string s;
    bool answer = true;
    cin >> s;
    if ((s.size() == 4) || (s.size() == 6))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]) == 0)
            {
                answer = false;
                break;
            }
            else
            {
                answer = true;
            }
        }
    }
    else
    {
        answer = false;
    }
    cout << answer << endl;
}