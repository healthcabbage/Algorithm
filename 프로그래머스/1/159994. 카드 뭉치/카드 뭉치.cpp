#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < goal.size(); i++)
    {
        string curword = goal[i];
        
        if (curword == cards1[x])
        {
            x++;
        }
        else if (curword == cards2[y])
        {
            y++;
        }
        else
        {
            answer = "No";
            break;
        }
    }
    
    return answer;
}