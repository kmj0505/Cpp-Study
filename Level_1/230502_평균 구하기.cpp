// ��� ���ϱ�

// ���� ���� : ������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.

//ex) arr = [1,2,3,4] return = 2.5,
//	  arr = [5,5] return = 5

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr = { 1,2,3,4 };
    double sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << sum / arr.size() << endl;
}