#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    //논문 정렬
    sort(citations.begin(), citations.end());
    // 0 1 3 5 6
    // 5 4 3 2 1
    
    //h편 이상이라는 것은, 
    for (int i = 0; i < citations.size(); i++)
    { 
        int h = citations.size() - i;
        if (citations.size() == 1) return 0;
        if (citations[i] >= h) return h;
    }
    
    return answer;
}