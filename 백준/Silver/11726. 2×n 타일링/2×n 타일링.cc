#include <bits/stdc++.h>
#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

int dp[1001];

int main() {
    FASTIO

    int n;
    cin >> n;

    dp[1] = 1, dp[2] =2;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }

    cout << dp[n] ;
    return 0;
}