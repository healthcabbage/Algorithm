#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    
    while(n!=0)
    {
        v.push_back(n%3);
        n /= 3;
    }
    
    int a = 1;
    for (int i = 0; i < v.size(); i++)
    {
        answer += v[v.size() - i - 1]*(a);
        a *= 3;
    }
    
    return answer;
}