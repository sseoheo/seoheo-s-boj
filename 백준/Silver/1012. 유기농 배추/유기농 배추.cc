#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field;
int M, N;

void dfs(int x, int y) {
    if (x < 0 || x >= M || y < 0 || y >= N || field[y][x] == 0) {
        return;
    }

    field[y][x] = 0;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> M >> N >> K;
        field = vector<vector<int>>(N, vector<int>(M, 0));

        for (int i = 0; i < K; ++i) {
            int x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }

        int worm_count = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (field[i][j] == 1) {
                    dfs(j, i);
                    worm_count++;
                }
            }
        }

        cout << worm_count << endl;
    }

    return 0;
}
