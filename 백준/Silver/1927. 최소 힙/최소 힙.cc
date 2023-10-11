#include <iostream>
#include <queue>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    FASTIO

    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;

        if(num == 0){
            if(pq.size()){
                cout << pq.top() << '\n';
                pq.pop();
            }
            else
                cout << 0 << '\n';
        }
        else
            pq.push(num);
    }
    return 0;
}