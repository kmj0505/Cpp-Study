// �ڸ��� ���ϱ�

// ���� ���� : �ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
//			   ������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

// ex) N = 123 answer = 6
//	   N = 987 answer = 24


#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int answer = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        int number = stoi(string(1, num[i]));
        answer += number;
    }
    cout << answer << endl;
}