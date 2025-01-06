#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
    if (a == b)
        return false;
    
    return int(a) > int (b);
}

string solution(string s) {
    string answer = "";
    
    if (s.size() < 1)
    {
        return "";
    }
    
    sort(s.begin(), s.end(), cmp);
    
    answer = s;
    
    return answer;
}