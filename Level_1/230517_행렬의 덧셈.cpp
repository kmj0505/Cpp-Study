// 행렬의 덧셈

// 문제 설명 : 행렬의 덧셈은 행과 열의 크기가 같은 두 행렬의 같은 행, 같은 열의 값을 서로 더한 결과가 됩니다. 
//			   2개의 행렬 arr1과 arr2를 입력받아, 행렬 덧셈의 결과를 반환하는 함수, solution을 완성해주세요.

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