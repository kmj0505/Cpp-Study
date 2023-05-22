#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	int N, M;
	int answer = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		if (i % M == 0)
		{
			answer += i;
		}
	}
	cout << answer << endl;
	return 0;
}