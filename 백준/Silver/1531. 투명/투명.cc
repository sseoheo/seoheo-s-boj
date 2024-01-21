#include<iostream>

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int board[101][101];

int main() {
    FASTIO

    int N, M, cnt = 0;
    cin >> N >> M;

    while(N--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = x1; i <= x2; i++){
            for(int j = y1; j <= y2; j++)
                board[i][j]++;
        }
    }

    for(int i = 1; i < 101; i++){
        for(int j = 1; j < 101 ;j++){
            if(board[i][j] > M)
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}

