// ������ �ݾ� ����ϱ�

// ���� ���� : ���� ���� ���̱ⱸ�� �αⰡ �ſ� ���� ���� ������ �ʽ��ϴ�. �� ���̱ⱸ�� ���� �̿��� price�� �ε�, 
//			   ���̱ⱸ�� N �� ° �̿��Ѵٸ� ���� �̿���� N�踦 �ޱ�� �Ͽ����ϴ�. ��, ó�� �̿�ᰡ 100�̾��ٸ� 2��°���� 200, 3��°���� 300���� ����� �λ�˴ϴ�.
//			   ���̱ⱸ�� count�� Ÿ�� �Ǹ� ���� �ڽ��� ������ �ִ� �ݾ׿��� �󸶰� ���ڶ������ return �ϵ��� solution �Լ��� �ϼ��ϼ���.
//			   ��, �ݾ��� �������� ������ 0�� return �ϼ���.

//ex) price = 3, money = 20, count = 4, result = 10


#include <iostream>
using namespace std;

int main()
{
    int price, money, count;
    cin >> price;
    cin >> money;
    cin >> count;
    long long answer = -1;
    long long prmn = 0;
    for (int i = 1; i <= count; i++)
    {
        prmn += price * i;
        if (prmn - money < 0)
        {
            answer = 0;
        }
        else if (prmn - money >= 0)
        {
            answer = prmn - money;
        }
    }
    cout << answer;
}