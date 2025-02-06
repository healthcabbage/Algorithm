#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> student1 = { 1, 2, 3, 4, 5 };
    vector<int> student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    vector<int> temp(3);
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (student1[i%student1.size()] == answers[i]) temp[0]++;
        if (student2[i%student2.size()] == answers[i]) temp[1]++;
        if (student3[i%student3.size()] == answers[i]) temp[2]++;
    }
    
    int maxnum = *max_element(temp.begin(), temp.end());
    if (maxnum == temp[0])
    {
        answer.push_back(1);
    }
    if (maxnum == temp[1])
    {
        answer.push_back(2);
    }
    if (maxnum == temp[2])
    {
        answer.push_back(3);
    }
    
    
    return answer;
}