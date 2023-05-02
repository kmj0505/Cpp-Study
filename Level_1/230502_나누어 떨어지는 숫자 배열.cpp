// ������ �������� ���� �迭

// ���� ���� : array�� �� element �� divisor�� ������ �������� ���� ������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
//             divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� - 1�� ��� ��ȯ�ϼ���.

//ex) arr = [5,9,7,10] divisor = 5 return = [5,10],
//	  arr = [2,36,1,3] divisor = 1 return = [1,2,3,36],
//	  arr = [3,2,6] divisor = 10 return = [-1]

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr = { 5,9,7,10 };
    int divisor = 5;
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    else
    {
        sort(answer.begin(), answer.end());
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
}