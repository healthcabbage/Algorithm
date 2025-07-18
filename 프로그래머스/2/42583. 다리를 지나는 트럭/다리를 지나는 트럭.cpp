#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> truck; //트럭 보관함
    int nexttruck = 0; //다음 트럭 순서
    int sum = 0; //트럭 총 무게
    
    while(1)
    {
        //트럭이 마지막 트럭이라면
        if (nexttruck == truck_weights.size())
        {
            //다리 길이 만큼 시간 초를 추가
            answer += bridge_length;
            break;
        }
        
        answer++;
        int temp = truck_weights[nexttruck];
        
        //차량이 다리를 다 건넜을 경우
        if (truck.size() == bridge_length)
        {
            //지나간 차량은 sum에서 제외
            sum -= truck.front();
            truck.pop();
        }
        
        //트럭이 더 지나갈수 있는 조건 체크
        if (sum + temp <= weight)
        {
            //다리를 건너는 총 차량 무게에 현재 차량 추가
            sum += temp;
            //현재 차량이 지나가는 큐에 차량 추가
            truck.push(temp);
            //다음 차량을 위해서 다음차 추가
            nexttruck++;
        }
        else
        {
            //차량이 지나갈수 없는 경우 시간 체크를 해야됨
            //0을 넣어서 지나갈수 없다고 큐에 넣기?
            truck.push(0);
        }
    }
    return answer;
}