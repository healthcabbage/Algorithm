#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> s;
    for(int i = 0; i < numbers.size(); i++)
    {
        s.push_back(to_string(numbers[i]));
    }
    
    //조건정렬
    sort(s.begin(), s.end(), cmp);
    
    for (int i = 0; i < s.size(); i++)
    {
        answer += s[i];
    }
    
    if (s[0] == "0") return "0";
    
    return answer;
}