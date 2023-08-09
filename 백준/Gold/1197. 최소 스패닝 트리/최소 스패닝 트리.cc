#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

int parent[10001];
bool check;

int find_parent(int x) {
    if (parent[x] == x) // 자기자신이 부모일경우
        return x;
    else // 부모 노드 찾기
        return parent[x] = find_parent(parent[x]);
}

void union_parent(int a, int b) {

    check = false;

    a = find_parent(a);
    b = find_parent(b);

    if (a == b) // 부모가 같다면 결합 시 사이클이 됨
        return;
    else {
        parent[a] = b; // 결합하고 부모로 기록
        check = true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E, A, B, C;
    vector<tuple<int, int, int>> graph; //vector<pair<int, pair<int, int>>>graph;
    cin >> V >> E;

    // 부모를 자신으로 초기화
    for (int i = 0; i <= V; i++) {
        parent[i] = i;
    }

    // 그래프 정보 저장
    for (int i = 0; i < E; i++) {
        cin >> A >> B >> C;
        graph.push_back(make_tuple(C, A, B)); // graph.push_back({ C,{A,B} });
    }
    // 가중치 오름차순 정렬
    sort(graph.begin(), graph.end());

    // MST(가중치합) 찾기
    int sum = 0;
    for (int i = 0; i < E; i++) {
        /*
        get<0>(graph[i] : 가중치
        get<1>(graph[i] : 출발 노드
        get<2>(graph[i] : 도착 노드
        */
        union_parent(get<1>(graph[i]), get<2>(graph[i]));
        if (check) 
            sum += get<0>(graph[i]);
        
    }
    cout << sum << '\n';


    return 0;

}


