#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n;

	cin >> t;

	while (t--)
	{
		cin >> n;
		vector<string> list(n);

		for (int i = 0; i < n; i++)
			cin >> list[i];

		sort(list.begin(), list.end());

		bool flag = true;
		for (int j = 0; j < n - 1; j++)
		{
			if (list[j] == list[j + 1].substr(0, list[j].length()))
			{
				flag = false;
				break;
			}
		}

		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}