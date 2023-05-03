// �߾� ����

// ���� ���� : �׸����ϴ� ����� �̸��� ���� ���ڿ� �迭 name, �� ����� �׸��� ������ ���� ���� �迭 yearning,
//			   �� ������ ���� �ι��� �̸��� ���� ������ ���ڿ� �迭 photo�� �Ű������� �־��� ��, 
//			   �������� �߾� ������ photo�� �־��� ������� �迭�� ��� return�ϴ� solution �Լ��� �ϼ����ּ���.

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