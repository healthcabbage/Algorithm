#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] / 2; ++j)
        {
            answer += to_string(i);
        }
    }
    
    string temp(answer);
    reverse(temp.begin(), temp.end());
    
    return answer + '0' + temp;
}