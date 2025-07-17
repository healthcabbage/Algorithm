#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int, int>> q; //우선순위와 내용물을 담음
    priority_queue<int> pq; // 최대 우선순위 유지하는 큐 선언
    
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    while(!q.empty())
    {
        //맨 처음의 q에 저장된 현재 값을 저장
        pair<int, int> current = q.front();
        q.pop(); //그리고 날림
        
        //현재 current의 두번째 값. (프로세스 안의 데이터)가 우선순위 큐의 최대값을 비교한다.
        if (current.second == pq.top())
        {
            //최대값이 현재 값과 같다면 answer에 +1을 해준다.
            answer++;
            //그리고 맨위의 값을 날림 (순서를 알아냈으니까)
            pq.pop();
            
            //여기서 current의 현재 순번이 location의 값과 같다면. 즉 몇번째 값인지 불러오는 데이터가 같다면
            if (current.first == location)
            {
                //answer의 값을 리턴
                return answer;
            }
        }
        else
        {
            //아니라면 q의 뒤에 넣어줌.
            // 2, 1, 3, 2 -> 1, 3, 2, 2
            q.push(current);
        }
    }
    
    return answer;
}