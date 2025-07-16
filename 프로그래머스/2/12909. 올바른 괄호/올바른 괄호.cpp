#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> c;
    
    for (int i = 0; i<s.size(); i++)
    {
        if (s[i] == '(')
            c.push('(');
        else
        {
            if (!c.empty() && c.top() == '(')
                c.pop();
            else
                c.push(')');
        }
    }
    
    if(c.empty())
        return true;
    else
        return false;  
    
}