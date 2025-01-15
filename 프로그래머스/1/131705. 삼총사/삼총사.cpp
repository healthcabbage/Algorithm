#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    for (int i = 0; i < number.size() - 2; i++)
    {
        for (int t = i + 1; t < number.size() - 1; t++)
        {
            for (int g = t + 1; g < number.size(); g++)
            {
                if (number[i] + number[t] + number[g] == 0)
                {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}