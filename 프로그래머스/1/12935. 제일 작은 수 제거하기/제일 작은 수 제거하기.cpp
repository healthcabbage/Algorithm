#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    arr.erase(min_element(arr.begin(), arr.end()));
    
    if (arr[0] == 10)
    {
        answer.push_back(-1);
        return answer;
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        answer.push_back(arr[i]);
    }
    
    return answer;
}