#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int plen = p.length();
    
    for (int i = 0; i <= t.length() - plen; i++)
    {
        string temp = t.substr(i, plen);
        long tmp = stol(temp), p_l = stol(p);
        
        if (tmp <= p_l) answer += 1;
    }
    
    return answer;
}