// ���ڿ� �� p�� y�� ����

// ���� ���� : �빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.
//			   s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
//			   'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. ��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.
//			   ���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.

//ex) s = "pPoooyY", answer = true
//	  s = "Pyy", answer = false

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    bool answer = true;
    int pcount = 0;
    int ycount = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'p') || (s[i] == 'P'))
        {
            pcount += 1;
        }
        else if ((s[i] == 'y') || (s[i] == 'Y'))
        {
            ycount += 1;
        }
    }
    return pcount == ycount;
}