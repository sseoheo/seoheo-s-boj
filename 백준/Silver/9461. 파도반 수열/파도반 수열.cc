#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

long long dp[101];

int main() {
    FASTIO

    int T, N;
    cin >> T;

    while(T--){
        cin >> N;
        dp[0] = dp[1] = dp[2] = dp[3] = 1;
        dp[4] = dp[5] = 2;
       for(int i = 6; i <=N; i++){
           dp[i] = dp[i-1] + dp[i-5];
       }
        cout << dp[N] << "\n";
    }

    return 0;
}