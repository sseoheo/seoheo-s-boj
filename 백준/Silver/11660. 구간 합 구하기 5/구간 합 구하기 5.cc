#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    scanf("%d %d", &N, &M);

    vector<vector<int>> table(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> cumulative_sum(N + 1, vector<int>(N + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &table[i][j]);
            cumulative_sum[i][j] = table[i][j] + cumulative_sum[i - 1][j] + cumulative_sum[i][j - 1] - cumulative_sum[i - 1][j - 1];
        }
    }

    for (int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int sum = cumulative_sum[x2][y2] - cumulative_sum[x1 - 1][y2] - cumulative_sum[x2][y1 - 1] + cumulative_sum[x1 - 1][y1 - 1];
        printf("%d\n", sum);
    }

    return 0;
}
