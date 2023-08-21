#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m, importance;

    cin >> t;
    for(int i = 0; i < t; i++){
        int cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int>printer;
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            cin >> importance;
            q.push({j, importance});      // 인덱스와 중요도를 저장
            printer.push(importance);           //  중요도를 담는 우선순위 큐
        }
        while(!printer.empty()){
            int idx = q.front().first;             // 각 값을 새로운 변수에 저장
            int prior = q.front().second;          // 빈 큐에 접근하는 오류 피하기
            q.pop();
            if(printer.top() == prior){            // 중요도가 높은 경우
                cnt++;
                printer.pop();
                if(idx == m){                      // 찾고자 하는 문서
                    cout << cnt << '\n';
                    break;
                }
            }
            else 
                q.push({idx,prior});
        }
    }
    return 0;
}
