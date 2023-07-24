#include <iostream>
#include <algorithm>

using namespace std;

int board[51][51] = {};

int check(int x, int y) {
    int cnt_white = 0;
    int cnt_black = 0;

    // 8*8 에 대한 탐색
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == board[i][j]) // 시작하는 블록이 흰색일때
                cnt_white++;
            else if ((i + j + 1) % 2 == board[i][j]) // 시작하는 블록이 검은색일때
                cnt_black++;
        }
    }
    return min(cnt_white, cnt_black); // 최솟값 반환
}
int main() {
    int N, M;
    int min_color = 2500;
    char c;
    cin >> N >> M;

    // B = '0', W ='1'로 저장
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> c;
            if (c == 'B')
                board[i][j] = 0;
            else
                board[i][j] = 1;
        }
    }
    
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            if (min_color > check(i, j))
                min_color = check(i, j);
        }
    }

    cout << min_color;
}