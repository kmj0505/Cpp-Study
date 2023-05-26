//5. 나이 계산

//문제 설명 : 주민등록증의 번호가 주어지면 주민등록증 주인의 나이와 성별을 판단하여 출력하는 프로그램 을 작성하세요.
//			주민등록증의 번호는 - 를 기준으로 앞자리와 뒷자리로 구분된다.
//			뒷자리의 첫 번째 수가 1이면 1900년대생 남자이고, 2이면 1900년대생 여자, 3이면 2000년대생 남자, 4이면 2000년대생 여자이다.
//			올해는 2019년입니다.해당 주민등록증 주인의 나이와 성별을 출력하세요.

//입력 : 780316-2376152

//출력 : 42 W



#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	string num, gen;
	cin >> num;

	int age = (num[0] - '0')*10;
	int age1 = num[1] - '0';
	int gender = num[7] - '0';
	
	if (gender == 1)
	{
		gen = "M";
		age = 2019 - ((age + age1) + 1900) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 2)
	{
		gen = "W";
		age = 2019 - ((age + age1) + 1900) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 3)
	{
		gen = "M";
		age = 2019 - ((age + age1) + 2000) + 1;
		cout << age << " " << gen;
	}
	else if (gender == 4)
	{
		gen = "W";
		age = 2019 - ((age + age1) + 2000) + 1;
		cout << age << " " << gen;
	}
	else
	{
		cout << "잘못 입력했습니다.";
	}

	return 0;
}