#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	string check = "YES";

	for (int i = 0; i < t; i++)
	{
		stack<char> s;
		string s_input;
		cin >> s_input;

		for (int j = 0; j < s_input.size(); j++)
		{
			if (s_input[j] == '(')
				s.push(s_input[j]);
			else
			{
				if (!s.empty() && s.top() == '(')
					s.pop();
				else
					s.push(')');
			}
		}

		if (!s.empty())
			check = "NO";

		cout << check << endl;

		check = "YES";
	}
	return 0;
}