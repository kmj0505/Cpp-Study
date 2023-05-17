// ����� ����

// ���� ���� : ����� ������ ��� ���� ũ�Ⱑ ���� �� ����� ���� ��, ���� ���� ���� ���� ���� ����� �˴ϴ�. 
//			   2���� ��� arr1�� arr2�� �Է¹޾�, ��� ������ ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

// ex) arr1	= [[1, 2], [2, 3]] arr2 = [[3, 4], [5, 6]] return = [[4, 6], [7, 9]]
//	   arr1 = [[1], [2]] arr2 = [[3], [4]] return = [[4], [6]]


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<vector<int>> arr1 = {{1,2},{2,3}};
    vector<vector<int>> arr2 = {{3,4},{5,6}};
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size()));

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];
            cout << "answer[" << i << "][" << j << "]: " << answer[i][j] << ' ';
        }
    }
    
}