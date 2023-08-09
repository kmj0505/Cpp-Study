// 21. 카드 게임

// 문제 설명 : 0부터 9까지의 숫자가 표시된 카드를 가지고 두 사람 A와 B가 게임을 한다. A와 B에게는 각 각 0에서 9까지의 숫자가 하나씩 표시된 10장의 카드뭉치가 주어진다.
//           두 사람은 카드를 임의 의 순서로 섞은 후 숫자가 보이지 않게 일렬로 늘어놓고 게임을 시작한다. 단, 게임 도중 카드 의 순서를 바꿀 수는 없다.
//           A와 B 각각이 늘어놓은 카드를 뒤집어서 표시된 숫자를 확인하는 것을 한 라운드라고 한다. 게임은 첫 번째 놓인 카드부터 시작하여 순서대로 10번의 라운드로 진행된다.
//           각 라운드에 서는 공개된 숫자가 더 큰 사람이 승자가 된다. 승자에게는 승점 3점이 주어지고 패자에게는 승점이 주어지지 않는다.
//           만약 공개된 두 숫자가 같아서 비기게 되면, A, B 모두에게 승점 1 점이 주어진다. 10번의 라운드가 모두 진행된 후, 총 승점이 큰 사람이 게임의 승자가 된다.
//           만약, A와 B 의 총 승점이 같은 경우에는, 제일 마지막에 이긴 사람을 게임의 승자로 정한다.
//           그래도 승부가 나지 않는 경우는 모든 라운드에서 비기는 경우뿐이고 이 경우에 두 사람은 비겼다고 한다.
//           예를 들어, 다음 표에서 3번째 줄은 각 라운드의 승자를 표시하고 있다. 표에서 D는 무승 부를 나타낸다.
//           이 경우에 A의 총 승점은 16점이고, B는 13점이어서, A가 게임의 승자가 된다.

// 입력 : 4 5 6 7 0 1 2 3 9 8
//       1 2 3 4 5 6 7 8 9 0

// 출력 : 16 13
//       A

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int a, b;
    int sum_A = 0, sum_B = 0;

    vector<int> A;
    vector<int> B;
    vector<string> Winner;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (0 <= a && a <= 9)
        {
            A.push_back(a);
        }
        else
        {
            cout << "입력된 값이 범위를 벗어났습니다. 종료합니다." << endl;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        if (0 <= b && b <= 9)
        {
            B.push_back(b);
        }
        else
        {
            cout << "입력된 값이 범위를 벗어났습니다. 종료합니다." << endl;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (A[i] > B[i])
        {
            Winner.push_back("A");
            sum_A += 3;
        }
        else if (A[i] < B[i])
        {
            Winner.push_back("B");
            sum_B += 3;
        }
        else
        {
            Winner.push_back("D");
            sum_A += 1;
            sum_B += 1;
        }
    }
    cout << sum_A << " " << sum_B << endl;

    if (sum_A > sum_B)
    {
        cout << "A" << endl;
    }
    else if (sum_A < sum_B)
    {
        cout << "B" << endl;
    }
    else
    {
        if (Winner[Winner.size() - 1] != "D")
        {
            cout << Winner[Winner.size() - 1] << endl;
        }
        else
        {
            int i = Winner.size() - 1;
            while (Winner[i] == "D")
            {
                i--;
            }
            cout << Winner[i] << endl;
        }
    }
    return 0;
}
