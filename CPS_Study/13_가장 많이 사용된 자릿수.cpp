//13. ���� ���� ���� �ڸ���

//���� ���� : N�ڸ��� �ڿ����� �ԷµǸ� �Էµ� �ڿ����� �ڸ��� �� ���� ���� ���� ���ڸ� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			���� ��� 1230565625��� �ڿ����� �ԷµǸ� 5�� 3�� ���Ǿ� ���� ���� ���� �����Դϴ�.
//			���� ���� ���� ��� �� �� ���� ū ���� ����ϼ���.

//�Է� : 1230565625

//��� : 5


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string number;
    cin >> number;
    vector<int> number_cnt(10, 0); // 0���� 9������ ���� ������ ������ ����

    for (char digit : number)
    {
        int num = digit - '0'; // ���ڸ� ���ڷ� ��ȯ
        number_cnt[num]++; // �ش� ���� ���� ����
    }

    int max_cnt = number_cnt[0];
    int max_digit = 0;

    for (int i = 1; i < 10; i++)
    {
        if (number_cnt[i] > max_cnt || (number_cnt[i] == max_cnt && i > max_digit))
        {
            max_cnt = number_cnt[i];
            max_digit = i;
        }
    }

    cout << max_digit << endl;

    return 0;
}
