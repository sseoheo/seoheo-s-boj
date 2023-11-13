#include <iostream>
#include <vector>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

vector<int> graph[1001];
int visited[1001];

// 방문 기록을 남기는 DFS
void DFS(int Vertex){
    visited[Vertex] = 1;

    for(int i = 0; i < graph[Vertex].size(); i++){
        int idx = graph[Vertex][i];
        if(visited[idx] == 0){
            DFS(idx);
        }
    }
}

int main() {
    FASTIO

    int N, M, u, v, cnt = 0;
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> u >> v;
        // 무방향 그래프 u -> v, v -> u (양방향 연결)
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    // 빠짐없이 탐색
    for(int i = 1; i <= N; i++){
        if(visited[i] == 0){
            cnt++;
            DFS(i);
        }
    }

    cout << cnt << '\n';
    return 0;
}