#include <iostream>
#include <vector>

using namespace std;

int work[15];
int profit[15];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> work[i] >> profit[i];
    }

    vector<int> dp(N + 1, 0); // N+1로 수정
    int maxProfit = 0;
    for (int i = 0; i <= N; i++) { // N까지 반복하도록 수정
        dp[i] = max(maxProfit, dp[i]);
        if (work[i] + i <= N) { // N 이하인 경우 처리하도록 수정
            dp[work[i] + i] = max(dp[work[i] + i], profit[i] + dp[i]);
        }
        maxProfit = max(maxProfit, dp[i]);
    }
    cout << maxProfit;
}
