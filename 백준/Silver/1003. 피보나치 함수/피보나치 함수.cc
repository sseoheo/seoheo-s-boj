#include <iostream>

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

using namespace std;

int main() {
    FASTIO

    int T;
    int dp[41] = {0, 1, 1};
    for(int i = 3; i < 41; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cin >> T;
    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        if (n == 0)
            cout << 1 << " " << 0 << "\n";
        else if (n == 1)
            cout << 0 << " " << 1 << "\n";
        else
            cout << dp[n-1] << " " << dp[n] << "\n";
    }

    return 0;
}