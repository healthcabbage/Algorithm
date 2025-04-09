#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> answer(26);

	string n;
	cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		answer[n[i] - 'a']++;
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}

	return 0;
}