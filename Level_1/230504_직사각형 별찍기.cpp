// ���簢�� �����

// ���� ���� : �� �������� ǥ�� �Է����� �� ���� ���� n�� m�� �־����ϴ�.
//			   ��(*) ���ڸ� �̿��� ������ ���̰� n, ������ ���̰� m�� ���簢�� ���¸� ����غ�����.

// ex) 5 3
//     *****
//     *****
//     *****


#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }
    return 0;
}