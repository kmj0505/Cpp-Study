//7. ����ܾ� ����

//���� ���� : ������ ��ǻ�Ͱ� ���̷����� �ɷ� ����ܾ �پ��� ��ҹ��ڰ� ȥ�յǾ� ǥ���ȴ�. 
//			���� ��� �Ƹ��ٿ� �̶� ���� ������ �ִ� beautiful �ܾ ��bE au T I fu L�� �� ���� ��ǻ�Ϳ� ǥ�õǰ� �ֽ��ϴ�.
//			���� ���� ������ ǥ�õǴ� ����ܾ ������ ǥ����� ������ �����ϰ� �ҹ���ȭ ���� ����ϴ� ���α׷��� �ۼ��ϼ���.

//�Է� : bE au T I fu L

//��� : beautiful


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string text;
	getline(cin, text);   //������ ������ ���ڿ� �Է�
	text.erase(remove(text.begin(), text.end(), ' '), text.end());

	for (int i = 0; i < text.size(); i++)
	{
		if ((text[i] >= 65) && (text[i] <= 90))
		{
			text[i] = text[i] + 32;
		}
	}
	cout << text;
	return 0;
}