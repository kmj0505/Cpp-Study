//10. �ڸ����� ��

//���� ���� : N���� �ڿ����� �ԷµǸ� �� �ڿ����� �ڸ����� ���� ���ϰ�, �� ���� �ִ��� �ڿ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			�� �ڿ����� �ڸ����� ���� ���ϴ� �Լ��� int digit_sum(int x)�� �� �ۼ��ؼ� ���α׷��� �ϼ���.

//�Է� : 5
//	125 15232 79 1325 97

//��� : 97 (�ڸ����� ���� �ִ��� �ڿ����� �������� ���, �� �� ���� ���� ū ���� ���)


#include <iostream>
#include <string>

using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(void) {
    int cnt, num;
    int max_sum = 0;
    int max_num = 0;

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        cin >> num;
        int sum = digit_sum(num);

        if (sum > max_sum) {
            max_sum = sum;
            max_num = num;
        }
        else if (sum == max_sum && num > max_num) {
            max_num = num;
        }
    }

    cout << max_num << endl;

    return 0;
}
