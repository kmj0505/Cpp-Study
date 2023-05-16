//���� ���ϱ�

// ���� ���� : � �������� �ֽ��ϴ�. �� �������� ������ ���ʴ�� ���� ���� �迭 absolutes�� �� �������� ��ȣ�� ���ʴ�� ���� �Ҹ��� �迭 signs�� �Ű������� �־����ϴ�.
//			   ���� �������� ���� ���Ͽ� return �ϵ��� solution �Լ��� �ϼ����ּ���.

// ex) absolutes = [4, 7, 12] signs	= [true, false, true] result = 9
//	   absolutes = [1, 2, 3] signs = [false, false, true] result = 0


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> absolutes = { 4, 7, 12 };
    vector<bool> signs = { true, false, true };
    int answer = 0;
    for (int i = 0; i < signs.size(); i++)
    {
        if (signs[i] == 0)
        {
            absolutes[i] = -(absolutes[i]);
        }
        answer += absolutes[i];
    }
    cout << answer << endl;
}