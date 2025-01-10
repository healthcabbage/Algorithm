#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    int gcdnum = 0;
    for (int i = 1; i <= max(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcdnum = i;
        }
    }
    
    return gcdnum;
}



vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd_num = gcd(n, m);
    int lcm = (n * m) / gcd_num;
    
    answer.push_back(gcd_num);
    answer.push_back(lcm);
    
    
    
    return answer;
}