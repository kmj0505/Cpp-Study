// ���� ���� ���ϱ�

// ���� ���� : 0���� 9������ ���� �� �Ϻΰ� ����ִ� ���� �迭 numbers�� �Ű������� �־����ϴ�. 
//			   numbers���� ã�� �� ���� 0���� 9������ ���ڸ� ��� ã�� ���� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.

// ex) numbers = [1, 2, 3, 4, 6, 7, 8, 0] result = 14
//	   numbers = [5, 8, 4, 0, 6, 7, 9] result = 6



#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> numbers = { 1,2,3,4,6,7,8,0 };
    int answer = -1;
    int sum = 0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }
    for (int j = 0; j < numbers.size(); j++)
    {
        num += numbers[j];
    }
    if (sum != num)
    {
        answer = sum - num;
    }
    cout << answer;
}