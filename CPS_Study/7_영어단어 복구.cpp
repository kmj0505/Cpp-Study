//7. 영어단어 복구

//문제 설명 : 현수의 컴퓨터가 바이러스에 걸려 영어단어가 뛰어쓰기와 대소문자가 혼합되어 표현된다. 
//			예를 들면 아름다운 이란 뜻을 가지고 있는 beautiful 단어가 “bE au T I fu L” 과 같이 컴퓨터에 표시되고 있습니다.
//			위와 같이 에러로 표시되는 영어단어를 원래의 표현대로 공백을 제거하고 소문자화 시켜 출력하는 프로그램을 작성하세요.

//입력 : bE au T I fu L

//출력 : beautiful


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string text;
	getline(cin, text);   //공백을 포함한 문자열 입력
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