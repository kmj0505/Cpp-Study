//16. Anagram(�Ƴ��׷� : ���� ���ͺ� ����)

//���� ���� : Anagram�̶� �� ���ڿ��� ���ĺ��� ���� ������ �ٸ����� �� ������ ��ġ�ϸ� �� �ܾ�� �Ƴ��׷��̶�� �մϴ�.
//			���� ��� AbaAeCe �� baeeACA �� ���ĺ��� ���� ������ �ٸ����� �� ������ ���캸��
//			 A(2), a(1), b(1), C(1), e(2)�� ���ĺ��� �� ������ ��� ��ġ�մϴ�.
//			�� ��� �� �ܾ ��迭�ϸ� ����� �ܾ �� �� �ִ� ���� �Ƴ��׷��̶� �մϴ�.
//			���̰� ���� �� ���� �ܾ �־����� �� �ܾ �Ƴ��׷����� �Ǻ��ϴ� ���α׷��� �ۼ��ϼ���.
//			�Ƴ��׷� �Ǻ��� ��ҹ��ڰ� ���е˴ϴ�.

//�Է� : AbaAeCe
//		baeeACA


//��� : YES


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string str;
	string strana;

	cin >> str;
	cin >> strana;

	if (str.size() == strana.size())
	{
		sort(str.begin(), str.end());
		sort(strana.begin(), strana.end());
		if (str == strana)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}
