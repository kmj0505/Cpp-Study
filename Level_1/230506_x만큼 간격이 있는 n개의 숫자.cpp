// x��ŭ ������ �ִ� n���� ����

// ���� ���� : �Լ� solution�� ���� x�� �ڿ��� n�� �Է� �޾�, x���� ������ x�� �����ϴ� ���ڸ� n�� ���ϴ� ����Ʈ�� �����ؾ� �մϴ�.
//			   ���� ���� ������ ����, ������ �����ϴ� �Լ�, solution�� �ϼ����ּ���.

// ex) x = 2 n = 5 answer = [2, 4, 6, 8, 10],
//	   x = 4 n = 3 answer = [4, 8, 12],
//	   x = - 4 n = 2 answer = [-4, -8]


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int x;
    int n;
    cin >> x >> n;
    vector<long long> answer;
    for (int i = 1; i <= n; i++)
    {
        int y = x * i;
        answer.push_back(y);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
}