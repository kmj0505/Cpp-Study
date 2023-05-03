// 추억 점수

// 문제 설명 : 그리워하는 사람의 이름을 담은 문자열 배열 name, 각 사람별 그리움 점수를 담은 정수 배열 yearning,
//			   각 사진에 찍힌 인물의 이름을 담은 이차원 문자열 배열 photo가 매개변수로 주어질 때, 
//			   사진들의 추억 점수를 photo에 주어진 순서대로 배열에 담아 return하는 solution 함수를 완성해주세요.

//ex) name = ["may", "kein", "kain", "radi"] yearning = [5, 10, 1, 3] photo = [["may", "kein", "kain", "radi"], ["may", "kein", "brin", "deny"], ["kon", "kain", "may", "coni"]] result =[19, 15, 6],
//	  name = ["kali", "mari", "don"] yearning = [11, 1, 55] photo = [["kali", "mari", "don"], ["pony", "tom", "teddy"], ["con", "mona", "don"]] result = [67, 0, 55],
//	  name = ["may", "kein", "kain", "radi"] yearning = [5, 10, 1, 3] photo = [["may"], ["kein", "deny", "may"], ["kon", "coni"]] result = [5, 15, 0]


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> name = { "may", "kein", "kain", "radi" };
    vector<int> yearning = { 5, 10, 1, 3 };
    vector<vector<string>> photo = { {"may", "kein", "kain", "radi"},{"may", "kein", "brin", "deny"},{"kon", "kain", "may", "coni"}};
    vector<int> answer;

    for (int i = 0; i < photo.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            for (int k = 0; k < name.size(); k++)
            {
                if (photo[i][j] == name[k]) {
                    sum += yearning[k];
                    break;
                }
            }
        }
        answer.push_back(sum);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }   
}