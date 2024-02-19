#include <iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int N, M, arr[9];
bool visited[9];

void dfs(int nbr, int cnt){

    if(cnt == M){
        for(int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = nbr; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt] = i;
            dfs(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    FASTIO

    cin >> N >> M;
    dfs(1, 0);

    return 0;
}
