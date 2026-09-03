#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int vectorsize = num_list.size();
    int evennumber = 0;
    int oddnumber = 0;
    
    for (int i = 0; i < vectorsize; i++)
    {
        if (i % 2 == 1)
        {
            oddnumber += num_list[i];
        }
        else
        {
            evennumber += num_list[i];
        }
    }
    
    if (evennumber > oddnumber)
    {
        answer = evennumber;
    }
    else if (evennumber < oddnumber)
    {
        answer = oddnumber;
    }
    else
    {
        answer = evennumber;
    }
    
    return answer;
}